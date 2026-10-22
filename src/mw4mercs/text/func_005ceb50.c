/*
 * FUN_005ceb50 (198 B) — __thiscall. Initializes an object, does FP math,
 * calls virtual methods at vtable+0x1d0 / +0x140, and calls FUN_005dcd00.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005ceb50(void)
{
    __asm {
        sub     esp, 0x18
        push    esi
        mov     esi, ecx
        _emit 0xE8
        _emit 0xC5
        _emit 0x64
        _emit 0xE4
        _emit 0xFF
        fadd    st, st(0)
        push    0
        _emit 0xD8
        _emit 0x05
        _emit 0x64
        _emit 0xD0
        _emit 0x76
        _emit 0x00
        fstp    qword ptr [esp + 8]
        _emit 0xE8
        _emit 0x02
        _emit 0x93
        _emit 0x13
        _emit 0x00
        fadd    qword ptr [esp + 4]
        mov     eax, dword ptr [esi]
        push    0
        lea     ecx, [esp + 8]
        fstp    qword ptr [esi + 0x4a4]
        push    ecx
        push    0
        lea     edx, [esp + 0x1c]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esi + 0x4ac], 1
        mov     dword ptr [esp + 0x14], 0xbf800000
        mov     dword ptr [esp + 0x18], 0xbf800000
        mov     dword ptr [esp + 0x1c], 0xbf800000
        mov     dword ptr [esp + 0x20], 0xbf800000
        mov     dword ptr [esp + 0x24], 0xbf800000
        mov     dword ptr [esp + 0x28], 0xbf800000
        call    dword ptr [eax + 0x1d0]
        mov     eax, dword ptr [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [eax + 0x140]
        push    0
        _emit 0xE8
        _emit 0x96
        _emit 0x92
        _emit 0x13
        _emit 0x00
        fstp    qword ptr [esp + 4]
        _emit 0x8B
        _emit 0x0D
        _emit 0xCC
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        _emit 0xE8
        _emit 0x27
        _emit 0x75
        _emit 0xE4
        _emit 0xFF
        test    eax, eax
        jz      L1
        mov     dword ptr [eax + 4], 3
        mov     byte ptr [eax], 0
        jmp     L2
L1:
        xor     eax, eax
L2:
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [eax + 8], ecx
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax + 0xc], edx
        _emit 0xE8
        _emit 0xEF
        _emit 0xE0
        _emit 0x00
        _emit 0x00
        pop     esi
        add     esp, 0x18
        ret
    }
}
