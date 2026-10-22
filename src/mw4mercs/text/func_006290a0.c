/*
 * FUN_006290a0 (356 B) -- ABL interpreter virtual-method dispatcher.
 * __thiscall, RET 0x4. Dispatches on the stack arg (0..0x17) via a 24-entry
 * jump table at 0x629204; each case loads a sub-object pointer from this+off,
 * dereferences its vtable and calls virtual slot 0x14, then RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_jt_629204[];   /* jump table @ 0x629204 (24 dwords) */

__declspec(naked) void FUN_006290a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        cmp     eax, 0x17
        ja      L629201
        jmp     dword ptr [eax*4 + g_jt_629204]
L6290B4:
        mov     ecx, dword ptr [ecx + 0x108]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        ret     0x4
L6290C2:
        mov     ecx, dword ptr [ecx + 0x10c]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        ret     0x4
L6290D0:
        mov     ecx, dword ptr [ecx + 0x110]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        ret     0x4
L6290DE:
        mov     ecx, dword ptr [ecx + 0x114]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        ret     0x4
L6290EC:
        mov     ecx, dword ptr [ecx + 0x118]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        ret     0x4
L6290FA:
        mov     ecx, dword ptr [ecx + 0x11c]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        ret     0x4
L629108:
        mov     ecx, dword ptr [ecx + 0x120]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        ret     0x4
L629116:
        mov     ecx, dword ptr [ecx + 0x124]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        ret     0x4
L629124:
        mov     ecx, dword ptr [ecx + 0x128]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        ret     0x4
L629132:
        mov     ecx, dword ptr [ecx + 0x12c]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        ret     0x4
L629140:
        mov     ecx, dword ptr [ecx + 0x130]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        ret     0x4
L62914E:
        mov     ecx, dword ptr [ecx + 0x134]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        ret     0x4
L62915C:
        mov     ecx, dword ptr [ecx + 0x160]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        ret     0x4
L62916A:
        mov     ecx, dword ptr [ecx + 0x138]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        ret     0x4
L629178:
        mov     ecx, dword ptr [ecx + 0x13c]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        ret     0x4
L629186:
        mov     ecx, dword ptr [ecx + 0x140]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        ret     0x4
L629194:
        mov     ecx, dword ptr [ecx + 0x144]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        ret     0x4
L6291A2:
        mov     ecx, dword ptr [ecx + 0x148]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        ret     0x4
L6291B0:
        mov     ecx, dword ptr [ecx + 0x14c]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        ret     0x4
L6291BE:
        mov     ecx, dword ptr [ecx + 0x150]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        ret     0x4
L6291CC:
        mov     ecx, dword ptr [ecx + 0x154]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        ret     0x4
L6291DA:
        mov     ecx, dword ptr [ecx + 0x158]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        ret     0x4
L6291E8:
        mov     ecx, dword ptr [ecx + 0x104]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        ret     0x4
L6291F6:
        mov     ecx, dword ptr [ecx + 0x15c]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
L629201:
        ret     0x4
    }
}
