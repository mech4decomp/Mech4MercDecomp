/*
 * FUN_0050D620 (52 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050d620(void)
{
    

extern void __cdecl FUN_0050d655(void);
extern int DAT_0076b2d0;
__asm {
push esi
        push edi
        mov edi, [esp+0x0C]
        mov eax, [edi]
        xor esi, esi
        test eax, eax
        jle call_free
loop_top:
        push esi
        push edi
        call FUN_0050d655
        mov eax, [edi]
        add esp, 0x08
        inc esi
        cmp esi, eax
        jl loop_top
call_free:
        mov eax, [edi+0x14]
        mov esi, dword ptr [DAT_0076b2d0]
        push eax
        call esi
        push edi
        call esi
        add esp, 0x08
        pop edi
        pop esi
        ret
    }


}
