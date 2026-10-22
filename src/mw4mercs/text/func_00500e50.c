/*
 * func_00500E50 - 105 bytes
 * Object construction with sub-object initialization (variant 2)
 */
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_00417230(void);
extern void __cdecl FUN_00416f20(void);
extern void __cdecl FUN_004171b0(void);

__declspec(naked) void func_00500E50()
{
    __asm {
        sub     esp, 0x14
        mov     eax, [esp + 0x18]
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        lea     ecx, [esp + 0x0C]
        call    FUN_00417170
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 8], 0x00776304
        call    FUN_00417230
        mov     esi, eax
        test    esi, esi
        jz      loop_done
        push    ebx
        lea     ebx, [edi + 0x18]
loop_start:
        lea     ecx, [esi + 0x10]
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_00416f20
        lea     edx, [esi + 0x14]
        push    edx
        push    esi
        mov     ecx, ebx
        call    FUN_00416f20
        lea     ecx, [esp + 0x0C]
        call    FUN_00417230
        mov     esi, eax
        test    esi, esi
        jne     loop_start
        pop     ebx
loop_done:
        lea     ecx, [esp + 8]
        call    FUN_004171b0
        pop     edi
        pop     esi
        add     esp, 0x14
        ret     4
    }
}
