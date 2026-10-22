/*
 * FUN_006FCD60 (103 B) — Get render dimensions.
 *
 * __stdcall, RET 8 (2 stack params: out_width, out_height).
 * If global 0x00856804 == 1, returns globals 0x00856810/0x00856814.
 * Otherwise calls FUN_006F5ED0, reads from global 0x0085682c
 * (at +0x18/+0x1c), calls FUN_006F5EE0. Returns -1 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f5ee0(void);

__declspec(naked) void __stdcall FUN_006fcd60(void)
{
    __asm {
        _emit   0x80
        _emit   0x3D
        _emit   0x04
        _emit   0x68
        _emit   0x85
        _emit   0x00
        _emit   0x01
        jnz     l_not_cached
        mov     eax, dword ptr [esp + 4]
        _emit   0x8B
        _emit   0x0D
        _emit   0x10
        _emit   0x68
        _emit   0x85
        _emit   0x00
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [eax], ecx
        _emit   0xA1
        _emit   0x14
        _emit   0x68
        _emit   0x85
        _emit   0x00
        mov     dword ptr [edx], eax
        ret     8
    l_not_cached:
        call    FUN_006f5ed0
        _emit   0xA1
        _emit   0x2C
        _emit   0x68
        _emit   0x85
        _emit   0x00
        test    eax, eax
        jz      l_fail
        mov     ecx, dword ptr [eax + 0x18]
        mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [eax + 0x1c]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [ecx], eax
        call    FUN_006f5ee0
        ret     8
    l_fail:
        mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [esp + 8]
        mov     dword ptr [edx], -1
        mov     dword ptr [eax], -1
        call    FUN_006f5ee0
        ret     8
    }
}
