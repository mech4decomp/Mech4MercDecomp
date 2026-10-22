/*
 * FUN_007347e0 (199 B) — __stdcall switch dispatcher (RET 0x8, 2 params).
 *
 * Reads this->[4]; if non-null and global byte 0x008aa288 is clear, dispatches
 * on param_2 (0..5) via a jump table:
 *   case 0/1/2: FPU math + two calls (FUN_0075b0d0 / FUN_0075b040)
 *   case 3:     FUN_007343a0(this)
 *   case 4:     FUN_007343d0(this)
 *   case 5:     FUN_00734410(this)
 *   default:    fall through to epilogue
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_008aa288;
extern long __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0075b0d0(int, int, int);
extern void __cdecl FUN_0075b040(int, int);
extern void __cdecl FUN_007343a0(void);
extern void __cdecl FUN_007343d0(void);
extern void __cdecl FUN_00734410(void);

__declspec(naked) void __stdcall FUN_007347e0(int param_1, int param_2)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0xC]
        mov     ebp, dword ptr [esi + 0x4]
        test    ebp, ebp
        jz      L_skip
        mov     al, byte ptr [g_008aa288]
        test    al, al
        jnz     L_skip
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, 0x5
        ja      L_skip
        /* __emit: jump-table dispatch FF 24 85 [eax*4+imm32]; MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0xA8
        __emit 0x48
        __emit 0x73
        __emit 0x00
    L_case012:
        fild    dword ptr [esi + 0xB8]
        push    ebx
        mov     ebx, dword ptr [esi + 0xD4]
        push    edi
        fmul    dword ptr [esi + 0xD8]
        mov     edi, dword ptr [esi + 0xD0]
        mov     dword ptr [esi + 0xAC], eax
        mov     dword ptr [esi + 0xA8], eax
        mov     dword ptr [esi + 0xC0], edi
        mov     dword ptr [esi + 0xC4], ebx
        call    FUN_0075db4a
        fild    dword ptr [esi + 0xBC]
        add     eax, edi
        mov     dword ptr [esi + 0xC8], eax
        fmul    dword ptr [esi + 0xDC]
        call    FUN_0075db4a
        push    0x0
        push    0x0
        add     eax, ebx
        push    ebp
        mov     dword ptr [esi + 0xCC], eax
        call    FUN_0075b0d0
        push    0x1
        push    ebp
        call    FUN_0075b040
        pop     edi
        pop     ebx
        pop     esi
        pop     ebp
        ret     0x8
    L_case3:
        mov     ecx, esi
        call    FUN_007343a0
        pop     esi
        pop     ebp
        ret     0x8
    L_case4:
        mov     ecx, esi
        call    FUN_007343d0
        pop     esi
        pop     ebp
        ret     0x8
    L_case5:
        mov     ecx, esi
        call    FUN_00734410
    L_skip:
        pop     esi
        pop     ebp
        ret     0x8
    }
}
