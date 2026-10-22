/*
 * 83 bytes — __thiscall method on an object.
 * Calls a vtable method, stores a double result, then
 * optionally calls methods on a sub-object.
 */

void FUN_0041FD80(void);
void FUN_005BF960(void);
void FUN_005BF980(void);
void FUN_00707E70(void);

__declspec(naked) void FUN_0059AF40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, dword ptr [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        push    0
        mov     edi, eax
        call    FUN_00707E70
        fstp    qword ptr [esi + 0x220]
        add     esi, 0x1A4
        mov     ecx, esi
        call    FUN_0041FD80
        test    eax, eax
        je      skip

        mov     ecx, esi
        call    FUN_0041FD80
        mov     ecx, eax
        call    FUN_005BF960

        mov     ecx, esi
        call    FUN_0041FD80
        mov     ecx, dword ptr [edi + 0xA0]
        push    ecx
        mov     ecx, eax
        call    FUN_005BF980

    skip:
        pop     edi
        pop     esi
        ret
    }
}
