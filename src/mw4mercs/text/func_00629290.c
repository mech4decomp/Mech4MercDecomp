/*
 * FUN_00629290 (286 B) -- ABL interpreter sub-object getter dispatcher.
 * __thiscall, RET 0x4. Dispatches on the stack arg (0..0x17) via a 24-entry
 * jump table at 0x6293b0; each case returns this+off in EAX. Default case
 * (out of range) asserts via FUN_006fab90 and returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);

extern int g_jt_6293b0[];   /* jump table @ 0x6293b0 (24 dwords) */

__declspec(naked) void FUN_00629290(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x8]
        cmp     eax, 0x17
        ja      L629396
        jmp     dword ptr [eax*4 + g_jt_6293b0]
L6292A6:
        mov     eax, dword ptr [ecx + 0x108]
        pop     ebp
        ret     0x4
L6292B0:
        mov     eax, dword ptr [ecx + 0x10c]
        pop     ebp
        ret     0x4
L6292BA:
        mov     eax, dword ptr [ecx + 0x110]
        pop     ebp
        ret     0x4
L6292C4:
        mov     eax, dword ptr [ecx + 0x114]
        pop     ebp
        ret     0x4
L6292CE:
        mov     eax, dword ptr [ecx + 0x118]
        pop     ebp
        ret     0x4
L6292D8:
        mov     eax, dword ptr [ecx + 0x11c]
        pop     ebp
        ret     0x4
L6292E2:
        mov     eax, dword ptr [ecx + 0x120]
        pop     ebp
        ret     0x4
L6292EC:
        mov     eax, dword ptr [ecx + 0x124]
        pop     ebp
        ret     0x4
L6292F6:
        mov     eax, dword ptr [ecx + 0x128]
        pop     ebp
        ret     0x4
L629300:
        mov     eax, dword ptr [ecx + 0x12c]
        pop     ebp
        ret     0x4
L62930A:
        mov     eax, dword ptr [ecx + 0x130]
        pop     ebp
        ret     0x4
L629314:
        mov     eax, dword ptr [ecx + 0x134]
        pop     ebp
        ret     0x4
L62931E:
        mov     eax, dword ptr [ecx + 0x160]
        pop     ebp
        ret     0x4
L629328:
        mov     eax, dword ptr [ecx + 0x138]
        pop     ebp
        ret     0x4
L629332:
        mov     eax, dword ptr [ecx + 0x13c]
        pop     ebp
        ret     0x4
L62933C:
        mov     eax, dword ptr [ecx + 0x140]
        pop     ebp
        ret     0x4
L629346:
        mov     eax, dword ptr [ecx + 0x144]
        pop     ebp
        ret     0x4
L629350:
        mov     eax, dword ptr [ecx + 0x148]
        pop     ebp
        ret     0x4
L62935A:
        mov     eax, dword ptr [ecx + 0x14c]
        pop     ebp
        ret     0x4
L629364:
        mov     eax, dword ptr [ecx + 0x150]
        pop     ebp
        ret     0x4
L62936E:
        mov     eax, dword ptr [ecx + 0x154]
        pop     ebp
        ret     0x4
L629378:
        mov     eax, dword ptr [ecx + 0x158]
        pop     ebp
        ret     0x4
L629382:
        mov     eax, dword ptr [ecx + 0x104]
        pop     ebp
        ret     0x4
L62938C:
        mov     eax, dword ptr [ecx + 0x15c]
        pop     ebp
        ret     0x4
L629396:
        push    0x78d070
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L6293A8
        int     3
L6293A8:
        xor     eax, eax
        pop     ebp
        ret     0x4
    }
}
