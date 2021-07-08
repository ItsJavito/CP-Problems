#include <algorithm>
#include <cstdint>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

struct Solver {

  Solver() {
    read_input();
    compute_topological_order();
    compute_solution();
  }

  void read_input() {
    std::cin >> num_addresses >> num_lists;
    successor_vertices.resize(num_addresses + 1);

    for (int i = 1; i <= num_lists; i++) {
      int num_elements;
      std::cin >> num_elements;
      std::copy_n(std::istream_iterator<int>(std::cin), num_elements,
                  std::back_inserter(successor_vertices[i]));
    }
  }

  void compute_topological_order() {
    visited = std::vector<bool>(num_addresses + 1, false);
    dfs(1);
  }

  void dfs(int visiting) {
    visited[visiting] = true;
    for (auto next : successor_vertices[visiting])
      if (!visited[next])
        dfs(next);
    topologic_order.push_back(visiting);
  }

  bool is_client_email(int index) { return index > num_lists; }

  void compute_solution() {
    single_emails =
        std::count_if(std::begin(topologic_order), std::end(topologic_order),
                      [&](auto address) { return is_client_email(address); });

    auto num_emails = std::vector<uint64_t>(num_addresses + 1, 0);

    for (auto node : topologic_order) {
      if (is_client_email(node))
        num_emails[node] = 1;
      else {
        num_emails[node] = std::accumulate(
            std::begin(successor_vertices[node]),
            std::end(successor_vertices[node]), uint64_t{0},
            [&](auto sum, auto next) {
              return (sum + num_emails[next]) % (1000000000 + 7);
            });
      }
    }

    spam_emails = num_emails[1];
  }

  int num_addresses;
  int num_lists;
  std::vector<std::vector<int>> successor_vertices;
  std::vector<int> topologic_order;
  std::vector<bool> visited;

  uint64_t spam_emails;
  uint64_t single_emails;
};

int main() {
  auto ans = Solver{};
  std::cout << ans.spam_emails << " " << ans.single_emails;
  return 0;
}