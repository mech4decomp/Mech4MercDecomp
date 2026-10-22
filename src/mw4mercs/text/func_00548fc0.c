/* FUN_00548fc0 (39 B) — Cleanup/destructor for global at 0x007DDD70 */
__declspec(naked) void func_00548fc0(void)
{
    

extern int DAT_007ddd70;
extern void __cdecl FUN_1004dd338(void);
extern void __cdecl FUN_1004084d2(void);
__asm {
push esi
        mov esi, dword ptr [DAT_007ddd70]
        test esi, esi
        jz   skip
        mov  ecx, esi
        call FUN_1004dd338
        push esi
        call FUN_1004084d2
        add  esp, 4
skip:
        mov dword ptr [DAT_007ddd70], 0x0
        pop  esi
        ret
    }


}
