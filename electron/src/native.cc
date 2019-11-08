#include <nan.h>

NAN_METHOD(getNativeMessage) {
  auto message = Nan::New<v8::String>("Hi from Native").ToLocalChecked();
  info.GetReturnValue().Set(message);
}
NAN_MODULE_INIT(Initialize) {
  NAN_EXPORT(target, getNativeMessage);
}

NODE_MODULE(addon, Initialize)