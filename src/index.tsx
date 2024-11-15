const TimerJsi = require('./NativeTimerJsi').default;

export function multiply(a: number, b: number): number {
  return TimerJsi.multiply(a, b);
}
