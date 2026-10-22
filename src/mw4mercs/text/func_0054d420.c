/* FUN_0054d420 (45 B) — Initialization function, arg1 in ecx (fastcall-like) */
__declspec(naked) void func_0054d420(void)
{
    

extern int DAT_007b46b4;
extern void __cdecl FUN_10040ecb5(void);
extern void __cdecl FUN_100411e9e(void);
__asm {
mov  ecx, [esp+4]
        push 0x76c814
        mov byte ptr [DAT_007b46b4], 0x1
        call FUN_10040ecb5
        test eax, eax
        jz   skip
        push 0
        push 0x7b46b4
        push 0x77d058
        mov  ecx, eax
        call FUN_100411e9e
skip:
        ret
    }


}
