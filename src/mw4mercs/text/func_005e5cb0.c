/*
 * FUN_005e5cb0 (365 B) — __thiscall, RET 4 (1 stack param).
 *
 * Processes a 2D aim target (16-bit ID pair). If the target differs
 * from the cached reference, builds a full orientation/aiming request
 * through a chain of helper calls and dispatches it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d1f80(void);
extern void __stdcall FUN_004da920(void);
extern void __stdcall FUN_0053be60(void);
extern void __stdcall FUN_004f3f40(void);
extern void __stdcall FUN_00523e60(void);
extern void __stdcall FUN_00767400(void);
extern void __stdcall FUN_0041e690(void);
extern void __stdcall FUN_004cec10(void);
extern void __stdcall FUN_004d9910(void);
extern void __stdcall FUN_0041e710(void);
extern void __stdcall FUN_004d21c0(void);

/* absolute-memory operands (extern symbols -> correct opcode + masked reloc) */
extern short DAT_007db0ac;
extern short DAT_007db0ae;
extern int   DAT_007db098;
extern int   DAT_007dab44;
extern int   DAT_007dab40;

__declspec(naked) void __stdcall FUN_005e5cb0(void)
{
    __asm {
        sub     esp, 0x128
        push    ebx
        mov     ebx, dword ptr [esp + 0x130]
        mov     ax, word ptr [ebx]
        cmp     ax, word ptr [DAT_007db0ac]
        push    esi
        mov     esi, ecx
        jnz     L_5cde
        mov     cx, word ptr [ebx + 2]
        cmp     cx, word ptr [DAT_007db0ae]
        jz      L_5e12
    L_5cde:
        push    edi
        push    1
        push    ebx
        lea     ecx, [esp + 0xf8]
        call    FUN_004d1f80
        push    ebx
        call    FUN_004da920
        mov     esi, dword ptr [esi + 0xd8]
        add     esp, 4
        push    2
        push    eax
        push    0
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [esp + 0xcc]
        push    2
        rep     movsd
        push    0x90
        lea     ecx, [esp + 0x44]
        call    FUN_0053be60
        lea     edx, [esp + 0xc0]
        push    edx
        lea     ecx, [esp + 0x50]
        call    FUN_004f3f40
        push    ebx
        lea     ecx, [esp + 0x88]
        mov     dword ptr [esp + 0x80], 2
        mov     dword ptr [esp + 0x84], 0
        call    FUN_00523e60
        push    0x8bd5e8
        lea     ecx, [esp + 0x94]
        mov     dword ptr [esp + 0x8c], 0
        mov     dword ptr [esp + 0x90], 0xffffffff
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [esp + 0xac]
        call    FUN_00767400
        mov     eax, dword ptr [esp + 0x30]
        push    0
        push    eax
        lea     ecx, [esp + 0x38]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_0041e690
        mov     ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     dl, byte ptr [eax]
        mov     byte ptr [esp + 0xc], dl
        mov     ax, word ptr [eax + 2]
        push    0
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        mov     word ptr [esp + 0x1a], ax
        call    FUN_004d9910
        mov     esi, eax
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        lea     ecx, [esp + 0x10]
        call    FUN_0041e710
        lea     ecx, [esp + 0xf0]
        call    FUN_004d21c0
        pop     edi
    L_5e12:
        pop     esi
        pop     ebx
        add     esp, 0x128
        ret     4
    }
}
