#ifndef MESSAGECREATOR_H_
#define MESSAGECREATOR_H_

#include <vector>
#include <string>

class MessageCreator {
public:

  MessageCreator(); //构建函数，和类名一样，没有类型和返回值
  const std::string& getRandomMessage() const;

private:

  std::vector<std::string> m_messages;
};
#endif // !MESSAGECREATOR_H_
