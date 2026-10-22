/* FUN_005498d0 (39 B) — Cleanup/destructor for global at 0x007DDD74 */
__declspec(naked) void func_005498d0(void)
{
    

extern int DAT_007ddd74;
extern void __cdecl FUN_100501b38(void);
extern void __cdecl FUN_1004084d2(void);
__asm {
push esi
        mov esi, dword ptr [DAT_007ddd74]
        test esi, esi
        jz   skip
        mov  ecx, esi
        call FUN_100501b38
        push esi
        call FUN_1004084d2
        add  esp, 4
skip:
        mov dword ptr [DAT_007ddd74], 0x0
        pop  esi
        ret
    }


}
