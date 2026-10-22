/*
 * FUN_005b92f0 (153 B) — __thiscall Sensor destructor.
 *
 * Sets vtable, deletes two arrays of 0x20 objects (virtual call through
 * vtable slot 0), frees two pointer arrays via FUN_00580620, destroys
 * sub-objects at +0x1a4/+0x198, then calls base dtor FUN_005f07e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00580620(void *a, int b);
extern void __stdcall FUN_0041fc90(void *param);
extern void __stdcall FUN_005f07e0(void *param);

__declspec(naked) void __stdcall FUN_005b92f0(void *param)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esi], 0x786d14
        lea     edi, [esi + 0x1d4]
        mov     ebx, 0x20
L_loop1:
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        jz      L_loop1_next
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_loop1_next:
        add     edi, 0x4
        dec     ebx
        jnz     L_loop1
        lea     edi, [esi + 0x254]
        mov     ebx, 0x20
L_loop2:
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        jz      L_loop2_next
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L_loop2_next:
        add     edi, 0x4
        dec     ebx
        jnz     L_loop2
        mov     eax, dword ptr [esi + 0x2e0]
        mov     ecx, dword ptr [esi + 0x2e8]
        sub     ecx, eax
        sar     ecx, 0x2
        push    ecx
        push    eax
        call    FUN_00580620
        mov     eax, dword ptr [esi + 0x2d4]
        mov     edx, dword ptr [esi + 0x2dc]
        sub     edx, eax
        sar     edx, 0x2
        push    edx
        push    eax
        call    FUN_00580620
        add     esp, 0x10
        lea     ecx, [esi + 0x1a4]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x198]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_005f07e0
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
