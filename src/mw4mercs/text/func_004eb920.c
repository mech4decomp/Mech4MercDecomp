/*
 * FUN_004eb920 (75 B) — __thiscall: copies a 3-float vector from param_1
 * into members +0x48/0x4c/0x50, and if member +0x2c is non-null, copies
 * the vector into it and calls FUN_00724350 with the negated first float.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00724350(void);

__declspec(naked) void FUN_004eb920(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x4]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ecx+0x48], eax
        mov     eax, dword ptr [edx+0x4]
        mov     dword ptr [ecx+0x4c], eax
        mov     eax, dword ptr [edx+0x8]
        mov     dword ptr [ecx+0x50], eax
        mov     eax, dword ptr [ecx+0x2c]
        test    eax, eax
        jz      L_ret
        mov     ecx, dword ptr [edx]
        mov     dword ptr [eax+0x38], ecx
        fld     dword ptr [eax+0x38]
        mov     ecx, dword ptr [edx+0x4]
        fchs
        mov     edx, dword ptr [edx+0x8]
        mov     dword ptr [eax+0x3c], ecx
        mov     ecx, edx
        push    ecx
        mov     dword ptr [eax+0x40], edx
        mov     edx, dword ptr [eax+0x3c]
        mov     eax, dword ptr [eax+0x18]
        push    edx
        push    ecx
        fstp    dword ptr [esp]
        push    0x20
        push    eax
        call    FUN_00724350
L_ret:
        ret     0x4
    }
}
