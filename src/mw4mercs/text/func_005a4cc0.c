/*
 * FUN_005a4cc0 (73 B) — __thiscall constructor/init method.
 *
 * Takes this in ECX, 4 stack params. Calls FUN_005a5070, zeroes two bytes,
 * sets vtable, calls FUN_005f5670 and FUN_005a4d70, returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005a5070(int a, int b, int c, int d);
extern void __stdcall FUN_005f5670(void);
extern void __stdcall FUN_005a4d70(int param);

void __declspec(naked) __stdcall FUN_005a4cc0(int a, int b, int c, int d)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        call    FUN_005a5070
        xor     al, al
        mov     ecx, esi
        mov     byte ptr [esi + 0x540], al
        mov     byte ptr [esi + 0x541], al
        mov     dword ptr [esi], 0x7844c0
        call    FUN_005f5670
        push    edi
        mov     ecx, esi
        call    FUN_005a4d70
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
