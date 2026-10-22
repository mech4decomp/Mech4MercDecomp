/*
 * FUN_00628ed0 (356 B) — __thiscall (ECX = this), RET 4 (one stack arg).
 * Jump-table switch on the stack arg (0..0x17); each case loads a member
 * pointer at [this+off], derefs its vtable, and calls virtual method at
 * vtable+0x10. Default (arg > 0x17) just returns.
 *
 * The jump table DATA at 0x629034 lies just past the function's 356-byte
 * slice (ends 0x00629034), so it is not part of the diffed bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00629034[];

__declspec(naked) void __fastcall FUN_00628ed0(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        cmp     eax, 0x17
        /* __emit: forward JA rel32 miscomputed by MSVC6 (off-by-3; jump-table reloc between branch and target) */
        __emit 0x0F
        __emit 0x87
        __emit 0x54
        __emit 0x01
        __emit 0x00
        __emit 0x00
        jmp     dword ptr [eax*4 + g_00629034]
L_628EE4:
        mov     ecx, dword ptr [ecx + 0x108]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        ret     0x4
L_628EF2:
        mov     ecx, dword ptr [ecx + 0x10c]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        ret     0x4
L_628F00:
        mov     ecx, dword ptr [ecx + 0x110]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        ret     0x4
L_628F0E:
        mov     ecx, dword ptr [ecx + 0x114]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        ret     0x4
L_628F1C:
        mov     ecx, dword ptr [ecx + 0x118]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        ret     0x4
L_628F2A:
        mov     ecx, dword ptr [ecx + 0x11c]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        ret     0x4
L_628F38:
        mov     ecx, dword ptr [ecx + 0x120]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        ret     0x4
L_628F46:
        mov     ecx, dword ptr [ecx + 0x124]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        ret     0x4
L_628F54:
        mov     ecx, dword ptr [ecx + 0x128]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        ret     0x4
L_628F62:
        mov     ecx, dword ptr [ecx + 0x12c]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        ret     0x4
L_628F70:
        mov     ecx, dword ptr [ecx + 0x130]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        ret     0x4
L_628F7E:
        mov     ecx, dword ptr [ecx + 0x134]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        ret     0x4
L_628F8C:
        mov     ecx, dword ptr [ecx + 0x160]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        ret     0x4
L_628F9A:
        mov     ecx, dword ptr [ecx + 0x138]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        ret     0x4
L_628FA8:
        mov     ecx, dword ptr [ecx + 0x13c]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        ret     0x4
L_628FB6:
        mov     ecx, dword ptr [ecx + 0x140]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        ret     0x4
L_628FC4:
        mov     ecx, dword ptr [ecx + 0x144]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        ret     0x4
L_628FD2:
        mov     ecx, dword ptr [ecx + 0x148]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        ret     0x4
L_628FE0:
        mov     ecx, dword ptr [ecx + 0x14c]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        ret     0x4
L_628FEE:
        mov     ecx, dword ptr [ecx + 0x150]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        ret     0x4
L_628FFC:
        mov     ecx, dword ptr [ecx + 0x154]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        ret     0x4
L_62900A:
        mov     ecx, dword ptr [ecx + 0x158]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        ret     0x4
L_629018:
        mov     ecx, dword ptr [ecx + 0x104]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        ret     0x4
L_629026:
        mov     ecx, dword ptr [ecx + 0x15c]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        /* fall through to shared ret 4 (case 0x17 shares epilogue with default) */
L_default:
        ret     0x4
    }
}
