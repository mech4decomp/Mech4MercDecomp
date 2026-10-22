/*
 * FUN_1001e110 (53 B) - __stdcall (1 arg, RET 0x4). Decrements a refcount
 * at [arg+0x10] via InterlockedDecrement (IAT 0x10021018); if it reaches
 * zero, calls the object's vtable method at +0x20 (release) and, if the
 * object is non-null, its +0x18 method. Returns 0 on release, else the
 * decremented count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021018;   /* IAT: InterlockedDecrement */

__declspec(naked) int __cdecl FUN_1001e110(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        lea     edi, [esi + 0x10]
        push    edi
        call    dword ptr [g_10021018]
        test    eax, eax
        jnz     L_e13e
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x20]
        test    esi, esi
        jz      L_e137
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
L_e137:
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x4
L_e13e:
        mov     eax, dword ptr [edi]
        pop     edi
        pop     esi
        ret     0x4
    }
}
