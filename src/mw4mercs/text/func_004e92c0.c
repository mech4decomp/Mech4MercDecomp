/*
 * FUN_004e92c0 (442 B) — __thiscall, RET 0x8. MLR/Adept core: "set interest
 * level" dispatcher. Computes a switch key from (this->0x14c & 0x180)<<2 |
 * param_2 and dispatches on 0/0x80/0x100/0x200/0x280/0x300/0x400/0x480/0x500,
 * calling FUN_004154d0 / FUN_004179b0 and virtual methods (vtable+0x34/+0x38)
 * to reconfigure a renderer. Illegal values assert via FUN_006fab90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_004179b0(void);
extern int  __cdecl FUN_006fab90(int);

extern char g_773358[];   /* string @ 0x773358 */

__declspec(naked) void FUN_004e92c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [esi + 0x10]
        and     ecx, 0x180
        cmp     ebx, ecx
        jz      L9487
        mov     eax, dword ptr [edi + 0x14c]
        and     eax, 0x180
        shl     eax, 0x2
        or      eax, ebx
        cmp     eax, 0x280
        jg      L939C
        jz      L938B
        cmp     eax, 0x100
        jg      L934B
        jz      L947A
        test    eax, eax
        jz      L9330
        cmp     eax, 0x80
        jnz     L9424
        mov     eax, dword ptr [esi + 0x10]
        and     eax, 0xfffffe7f
        or      eax, ebx
        pop     edi
        mov     dword ptr [esi + 0x10], eax
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
L9330:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x38]
        mov     eax, dword ptr [esi + 0x10]
        and     eax, 0xfffffe7f
        or      eax, ebx
        pop     edi
        mov     dword ptr [esi + 0x10], eax
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
L934B:
        cmp     eax, 0x200
        jnz     L9424
        lea     ecx, [edi + 0x164]
        push    ecx
        mov     ecx, esi
        call    FUN_004154d0
        push    esi
        lea     ecx, [edi + 0x15c]
        call    FUN_004179b0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x38]
        mov     eax, dword ptr [esi + 0x10]
        and     eax, 0xfffffe7f
        or      eax, ebx
        pop     edi
        mov     dword ptr [esi + 0x10], eax
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
L938B:
        test    ecx, ecx
        jnz     L947A
L9393:
        lea     eax, [edi + 0x15c]
        push    eax
        jmp     L9404
L939C:
        cmp     eax, 0x480
        jg      L941D
        jz      L93F9
        cmp     eax, 0x300
        jz      L938B
        cmp     eax, 0x400
        jnz     L9424
        cmp     ecx, 0x80
        jnz     L93C4
        lea     eax, [edi + 0x164]
        push    eax
        jmp     L93CB
L93C4:
        lea     ecx, [edi + 0x16c]
        push    ecx
L93CB:
        mov     ecx, esi
        call    FUN_004154d0
        push    esi
        lea     ecx, [edi + 0x15c]
        call    FUN_004179b0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x38]
        mov     eax, dword ptr [esi + 0x10]
        and     eax, 0xfffffe7f
        or      eax, ebx
        pop     edi
        mov     dword ptr [esi + 0x10], eax
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
L93F9:
        test    ecx, ecx
        jz      L9393
        lea     ecx, [edi + 0x16c]
        push    ecx
L9404:
        mov     ecx, esi
        call    FUN_004154d0
        push    esi
        lea     ecx, [edi + 0x164]
        call    FUN_004179b0
        mov     edx, dword ptr [esi]
        push    0x0
        jmp     L9475
L941D:
        cmp     eax, 0x500
        jz      L944A
L9424:
        push    offset g_773358
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L947A
        int     3
        /* assert-fail fall-through: duplicated epilogue (unreachable after INT3) */
        mov     eax, dword ptr [esi + 0x10]
        and     eax, 0xfffffe7f
        or      eax, ebx
        pop     edi
        mov     dword ptr [esi + 0x10], eax
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
L944A:
        test    ecx, ecx
        jnz     L9457
        lea     eax, [edi + 0x15c]
        push    eax
        jmp     L945E
L9457:
        lea     ecx, [edi + 0x164]
        push    ecx
L945E:
        mov     ecx, esi
        call    FUN_004154d0
        push    esi
        lea     ecx, [edi + 0x16c]
        call    FUN_004179b0
        mov     edx, dword ptr [esi]
        push    0x1
L9475:
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
L947A:
        mov     eax, dword ptr [esi + 0x10]
        and     eax, 0xfffffe7f
        or      eax, ebx
        mov     dword ptr [esi + 0x10], eax
L9487:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
    }
}
