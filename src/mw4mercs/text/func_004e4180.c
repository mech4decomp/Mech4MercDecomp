/*
 * FUN_004E4180 (3 B) — __fastcall return ECX (MOV EAX,ECX; RET).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004e4180(void)
{
    __asm {
        mov eax, ecx
        ret
    }
}
