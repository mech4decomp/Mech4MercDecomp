/*
 * FUN_5e00ee70 (142 B) — __stdcall (RET 0x4), 1 arg.
 * Decrements the refcount at [arg+0x18]; when it hits 0, releases the four
 * sub-objects at +0x2c/+0x24/+0x20/+0x28 (virtual Release at vtable+8), then
 * re-initializes the vtable pointers and calls the destructor FUN_5e02b453.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02b453(void);

__declspec(naked) int __stdcall FUN_5e00ee70(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0x18]
        dec     eax
        mov     dword ptr [esi + 0x18], eax
        jnz     L_eefa
        mov     eax, dword ptr [esi + 0x2c]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jz      L_ee91
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
        mov     dword ptr [esi + 0x2c], edi
    L_ee91:
        mov     eax, dword ptr [esi + 0x24]
        cmp     eax, edi
        jz      L_eea1
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 8]
        mov     dword ptr [esi + 0x24], edi
    L_eea1:
        mov     eax, dword ptr [esi + 0x20]
        cmp     eax, edi
        jz      L_eeb1
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
        mov     dword ptr [esi + 0x20], edi
    L_eeb1:
        mov     eax, dword ptr [esi + 0x28]
        cmp     eax, edi
        jz      L_eec1
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 8]
        mov     dword ptr [esi + 0x28], edi
    L_eec1:
        cmp     esi, edi
        pop     edi
        jz      L_eef8
        push    esi
        mov     dword ptr [esi], 0x5e0352c4
        mov     dword ptr [esi + 4], 0x5e035254
        mov     dword ptr [esi + 8], 0x5e0351dc
        mov     dword ptr [esi + 0xc], 0x5e0351b8
        mov     dword ptr [esi + 0x10], 0x5e035188
        mov     dword ptr [esi + 0x14], 0x5e035168
        call    FUN_5e02b453
        add     esp, 4
    L_eef8:
        xor     eax, eax
    L_eefa:
        pop     esi
        ret     4
    }
}
