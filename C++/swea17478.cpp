#include <iostream>
#include <string>
using namespace std;
int num = -1;
string ans[4] = {
    "재귀함수가 뭔가요?\n",
    "잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n",
    "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n",
    "그의 답은 대부분 옳았다고 하네.그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\n"};
void recursion(int N)
{
  if (N == -1)
  {
    return;
  }
  else
  {
    N--;
    num++;
    for (int i = 0; i < 4; i++)
    {
      int cur = 4 * num;
      while (cur != 0)
      {
        cout << "-";
        cur--;
      }
      cout << ans[i];
    }
    recursion(N);
  }
}

int main()
{

  int N;
  cin >> N;
  cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다\n";
  recursion(N);
}