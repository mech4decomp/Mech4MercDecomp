/*
 * FUN_005f37e0 (405 B) — __thiscall, RET 4 (1 stack param).
 *
 * Initializes a batch of fields, dispatches on a sub-object's state via a
 * jump table (0x5f3978), then copies a set of globals into the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_0078a300;
extern float DAT_0078a30c;
extern float DAT_0077deac;
extern unsigned short DAT_007db0ac;
extern unsigned short DAT_007db0ae;
extern int DAT_007b8d88;
extern int DAT_007b8d8c;
extern int DAT_007b8d90;
extern int DAT_007b8cec;
extern int DAT_007b8ce8;
extern int DAT_007b8cf0;
extern void FUN_00637b40(void);
extern void FUN_00637a20(void);
extern void FUN_0075db50(void);
extern void FUN_0041fcb0(void);

__declspec(naked) void __fastcall FUN_005f37e0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        or      eax, 0xffffffff
        lea     ecx, [esi + 0x78]
        mov     dword ptr [esi + 0x470], eax
        mov     dword ptr [esi + 0x46c], eax
        mov     eax, dword ptr [ecx]
        mov     dword ptr [esi + 0x428], 0xb
        call    dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x50]
        cmp     eax, 0x5
        ja      default_case
        jmp     dword ptr [eax*4 + 0x5f3978]
case0:
        push    0x82
        jmp     common
case2:
        push    0x84
        jmp     common
case3:
        push    0x86
        jmp     common
case5:
        push    0x88
common:
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        call    FUN_0075db50
        jmp     after_switch
default_case:
        fld     dword ptr [DAT_0078a300]
after_switch:
        mov     cx, word ptr [DAT_007db0ac]
        fst     dword ptr [esi + 0x450]
        fld     dword ptr [DAT_0078a30c]
        mov     dx, word ptr [DAT_007db0ae]
        fmul    dword ptr [DAT_0077deac]
        xor     ebx, ebx
        mov     dword ptr [esi + 0x45c], ebx
        mov     word ptr [esi + 0x4b0], cx
        fadd    st, st(1)
        lea     ecx, [esi + 0x4b4]
        mov     dword ptr [esi + 0x42c], ebx
        fstp    dword ptr [esi + 0x44c]
        mov     dword ptr [esi + 0x430], ebx
        mov     dword ptr [esi + 0x434], ebx
        fstp    st
        mov     dword ptr [esi + 0x438], ebx
        mov     dword ptr [esi + 0x43c], ebx
        mov     dword ptr [esi + 0x440], ebx
        mov     dword ptr [esi + 0x444], ebx
        mov     dword ptr [esi + 0x448], ebx
        mov     dword ptr [esi + 0x4a4], ebx
        mov     dword ptr [esi + 0x460], ebx
        mov     dword ptr [esi + 0x464], ebx
        mov     byte ptr [esi + 0x468], bl
        mov     byte ptr [esi + 0x469], bl
        mov     byte ptr [esi + 0x4a0], bl
        mov     byte ptr [esi + 0x4a1], bl
        mov     dword ptr [esi + 0x478], ebx
        mov     dword ptr [esi + 0x474], ebx
        mov     dword ptr [esi + 0x47c], ebx
        mov     dword ptr [esi + 0x480], ebx
        mov     byte ptr [esi + 0x4bc], 0xff
        mov     word ptr [esi + 0x4b2], dx
        call    FUN_0041fcb0
        mov     eax, dword ptr [DAT_007b8d88]
        mov     ecx, dword ptr [DAT_007b8d8c]
        mov     edx, dword ptr [DAT_007b8d90]
        mov     dword ptr [esi + 0x4d4], eax
        mov     eax, dword ptr [DAT_007b8cec]
        mov     dword ptr [esi + 0x4d8], ecx
        mov     ecx, dword ptr [DAT_007b8ce8]
        mov     dword ptr [esi + 0x4dc], edx
        mov     edx, dword ptr [DAT_007b8cf0]
        mov     dword ptr [esi + 0x4e4], eax
        mov     dword ptr [esi + 0x4e0], ecx
        mov     byte ptr [esi + 0x4d0], bl
        mov     byte ptr [esi + 0x4d1], bl
        mov     dword ptr [esi + 0x4ec], ebx
        mov     dword ptr [esi + 0x4f0], ebx
        mov     byte ptr [esi + 0x4bd], 0x1
        mov     dword ptr [esi + 0x4e8], edx
        pop     esi
        pop     ebx
        ret     4
    }
}
