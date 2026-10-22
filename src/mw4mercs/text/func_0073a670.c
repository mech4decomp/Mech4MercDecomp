/*
 * FUN_0073A670 (521 B) — Critical-section-guarded loop over a list of objects,
 * dispatching per-object state (type 3 / type 4) to various helpers.
 *
 * __stdcall, RET 8 (2 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_856b94;                          /* DAT_00856b94 */
extern void (__stdcall *g_76b110)(void *);             /* EnterCriticalSection IAT */
extern int g_856a88;                                   /* DAT_00856a88 (count) */
extern unsigned int g_8aaec0;                          /* DAT_008aaec0 */
extern void (__stdcall *g_76b100)(void *);             /* LeaveCriticalSection IAT */

extern void __cdecl FUN_00758650(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_00757cf0(void);
extern void __cdecl FUN_007563c0(void);
extern void __cdecl FUN_00757f00(void);
extern void __cdecl FUN_00757d30(void);
extern void __cdecl FUN_00755c70(void);
extern void __cdecl FUN_00756940(void);
extern void __cdecl FUN_00749d50(void);

__declspec(naked) void __stdcall FUN_0073a670(void)
{
    __asm {
        mov     eax, dword ptr [g_856b94]
        sub     esp, 0x40
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        jz      L_872
        push    0x858ac8
        call    dword ptr [g_76b110]
        cmp     dword ptr [g_856a88], ebx
        mov     dword ptr [esp + 0x8], ebx
        jle     L_867
        push    ebp
        push    esi
        push    edi
        mov     esi, 0x856a8c
L_6a6:
        mov     ecx, dword ptr [esi]
        cmp     dword ptr [ecx], ebx
        mov     eax, dword ptr [ecx + 0x9c]
        jz      L_81a
        cmp     eax, 0x3
        mov     al, byte ptr [ecx + 0x82]
        jnz     L_77a
        cmp     al, bl
        jz      L_84a
        cmp     byte ptr [ecx + 0x83], bl
        jnz     L_84a
        xor     eax, eax
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x2c], eax
        mov     dword ptr [esp + 0x30], eax
        push    ebx
        mov     dword ptr [esp + 0x38], eax
        push    0x12
        lea     edx, [esp + 0x30]
        mov     word ptr [esp + 0x40], ax
        mov     eax, dword ptr [ecx]
        push    edx
        push    eax
        call    FUN_00758650
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], ebx
        fild    qword ptr [esp + 0x18]
        fmul    qword ptr [esp + 0x54]
        call    FUN_0075db4a
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [edx + 0x84]
        mov     edi, dword ptr [edx + 0x8c]
        lea     ebp, [ecx + eax*0x1]
        cmp     ebp, edi
        jbe     L_734
        sub     ecx, edi
        add     ecx, eax
        jmp     L_736
L_734:
        mov     ecx, ebp
L_736:
        mov     edx, dword ptr [edx]
        push    ecx
        push    edx
        call    FUN_00757cf0
        mov     ecx, dword ptr [esi]
        cmp     dword ptr [ecx + 0x9c], 0x3
        jnz     L_74f
        call    FUN_007563c0
L_74f:
        cmp     dword ptr [g_8aaec0], ebx
        jnz     L_84a
        mov     eax, dword ptr [esi]
        mov     dl, byte ptr [eax + 0x80]
        xor     ecx, ecx
        cmp     dl, bl
        mov     edx, dword ptr [eax]
        setnz   cl
        push    ecx
        push    ebx
        push    ebx
        push    edx
        call    FUN_00757f00
        jmp     L_84a
L_77a:
        cmp     al, bl
        jz      L_84a
        cmp     byte ptr [ecx + 0x83], bl
        jnz     L_84a
        xor     eax, eax
        mov     dword ptr [esp + 0x3c], eax
        mov     dword ptr [esp + 0x40], eax
        mov     dword ptr [esp + 0x44], eax
        push    ebx
        mov     dword ptr [esp + 0x4c], eax
        push    0x12
        lea     edx, [esp + 0x44]
        mov     word ptr [esp + 0x54], ax
        mov     eax, dword ptr [ecx]
        push    edx
        push    eax
        call    FUN_00758650
        mov     ecx, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x20], ecx
        mov     dword ptr [esp + 0x24], ebx
        fild    qword ptr [esp + 0x20]
        fmul    qword ptr [esp + 0x54]
        call    FUN_0075db4a
        mov     edi, eax
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [eax]
        push    ebx
        lea     edx, [esp + 0x14]
        push    edx
        push    ecx
        call    FUN_00757d30
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi]
        add     eax, edi
        mov     dword ptr [esp + 0x10], eax
        mov     edx, dword ptr [ecx + 0x10]
        cmp     eax, edx
        jc      L_800
L_7f3:
        sub     eax, edx
        mov     dword ptr [esp + 0x10], eax
        mov     edx, dword ptr [ecx + 0x10]
        cmp     eax, edx
        jnc     L_7f3
L_800:
        cmp     byte ptr [ecx + 0x80], bl
        jz      L_813
        mov     edx, dword ptr [ecx]
        push    eax
        push    edx
        call    FUN_00757cf0
        jmp     L_84a
L_813:
        call    FUN_00755c70
        jmp     L_84a
L_81a:
        cmp     eax, 0x4
        jnz     L_84a
        call    FUN_00756940
        test    al, al
        jz      L_84a
        mov     eax, dword ptr [esi]
        cmp     byte ptr [eax + 0x83], bl
        jnz     L_84a
        mov     ecx, dword ptr [esp + 0x58]
        mov     edx, dword ptr [esp + 0x54]
        mov     eax, dword ptr [eax + 0x70]
        push    ecx
        mov     ecx, dword ptr [eax + 0xec]
        push    edx
        call    FUN_00749d50
L_84a:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [g_856a88]
        inc     eax
        add     esi, 0x4
        cmp     eax, ecx
        mov     dword ptr [esp + 0x14], eax
        jl      L_6a6
        pop     edi
        pop     esi
        pop     ebp
L_867:
        push    0x858ac8
        call    dword ptr [g_76b100]
L_872:
        pop     ebx
        add     esp, 0x40
        ret     0x8
    }
}
