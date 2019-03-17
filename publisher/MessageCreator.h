#ifndef MESSAGECREATOR_H_
#define MESSAGECREATOR_H_

#include <vector>
#include <string>

class MessageCreator {
public:

  MessageCreator(); //构造函数，无类型和返回值，名字和类名一致
  const std::string& getRandomMessage() const;

private:

  std::vector<std::string> m_messages;
};
#endif // !MESSAGECREATOR_H_
