/*
 * FUN_005d9810 (107 B) — __thiscall, RET 4. Writes a 3-float vector to the
 * output pointer. If this->[0x10] set, copies 3 floats from it. Else if
 * this->[0x14] set, converts two ints to floats. Else fills with -1.0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005d9810(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        sub     esp, 0xc
        test    eax, eax
        jz      L_983f
        fld     dword ptr [eax + 0xc]
        fld     dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x8], eax
        fxch
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x8]
        fstp    dword ptr [eax]
        mov     dword ptr [eax + 0x8], ecx
        fstp    dword ptr [eax + 0x4]
        add     esp, 0xc
        ret     0x4
L_983f:
        mov     eax, dword ptr [ecx + 0x14]
        test    eax, eax
        jz      L_9864
        fild    dword ptr [eax + 0x1c]
        fild    dword ptr [eax + 0x20]
        mov     eax, dword ptr [esp + 0x10]
        fxch
        mov     dword ptr [eax + 0x4], 0
        fstp    dword ptr [eax]
        fstp    dword ptr [eax + 0x8]
        add     esp, 0xc
        ret     0x4
L_9864:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, 0xbf800000
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        add     esp, 0xc
        ret     0x4
    }
}
