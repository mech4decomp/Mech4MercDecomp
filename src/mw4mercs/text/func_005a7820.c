/*
 * FUN_005a7820 (131 B) — Constructor-like thiscall function.
 *
 * Initializes a light entity object with sub-objects.
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f0740(void *this, int p1, int p2, int p3, int p4);
extern void __stdcall FUN_0041fc80(int arg);
extern void __stdcall FUN_00412780(void *ptr);
extern void __stdcall FUN_005a78d0(int arg);

__declspec(naked) void __stdcall FUN_005a7820(int p1, int p2, int p3, int p4)
{
    
__asm {
mov     eax, dword ptr [esp + 0x10]   ; p4
        mov     edx, dword ptr [esp + 0x4]    ; p1
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]   ; p2
        mov     esi, ecx                       ; this
        mov     ecx, dword ptr [esp + 0x18]   ; p3
        push    eax                            ; p4
        push    ecx                            ; p3
        push    edi                            ; p2
        push    edx                            ; p1
        mov     ecx, esi                       ; this
        call    FUN_005f0740

        lea     ebx, [esi + 0x180]
        push    0x0
        mov     ecx, ebx
        call    FUN_0041fc80
        mov     dword ptr [ebx], 0x784da4

        lea     ebx, [esi + 0x188]
        push    0x0
        mov     ecx, ebx
        call    FUN_0041fc80
        mov     dword ptr [ebx], 0x77ceac

        lea     ecx, [esi + 0x190]
        lea     eax, [edi + 0x6c]
        mov     dword ptr [ecx], 0x0
        push    eax
        mov     dword ptr [esi], 0x784cf0
        call    FUN_00412780

        push    edi
        mov     ecx, esi
        mov     dword ptr [esi + 0x17c], 0x0
        call    FUN_005a78d0

        or      dword ptr [esi + 0x10], 0x40
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
    }


}
