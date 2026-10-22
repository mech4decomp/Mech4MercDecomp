/*
 * FUN_005d4d10 (76 B) — __thiscall, RET 4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005dcd40(void *p);

__declspec(naked) void __stdcall FUN_005d4d10(void)
{
    

extern int DAT_0076b420;
__asm {
sub     esp, 0x64
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x70]
        mov     esi, ecx
        push    edi
        call    FUN_005dcd40
        mov     eax, dword ptr [esi + 0x364]
        test    eax, eax
        jz      L_4d37
        push    0x788128
        lea     eax, [esp + 0xc]
        push    eax
        jmp     L_4d41
L_4d37:
        push    0x788108
        lea     ecx, [esp + 0xc]
        push    ecx
L_4d41:
        call dword ptr [DAT_0076b420]
        lea     edx, [esp + 0x10]
        add     esp, 0x8
        push    edx
        call    edi
        add     esp, 0x4
        pop     edi
        pop     esi
        add     esp, 0x64
        ret     0x4
    }


}
