/*
 * FUN_0069b0f0 (1077 B) — HUD/ABL string-constant handler. Dispatches on the
 * global DAT_008058ac (mode) and copies a string/float/int constant into the
 * output object at param_1+0x1c / +0x3c. Includes an AblStackHeap vector
 * push (FUN_006f3c80 / FUN_004084d0 / FUN_004084e0) and a rep movsd/movsb
 * string copy.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_008058ac;   /* DAT_008058ac */
extern int  g_008050a0;   /* DAT_008050a0 */
extern int  g_008050a4;   /* DAT_008050a4 */
extern float g_008050a8;  /* DAT_008050a8 */
extern int  g_0080d9bc;   /* DAT_0080d9bc */
extern int  g_0080d9b4;   /* DAT_0080d9b4 */
extern int  g_0080d9b8;   /* DAT_0080d9b8 */
extern int  g_008058b4;   /* DAT_008058b4 (AblStackHeap*) */
extern char g_008050ac[]; /* DAT_008050ac (string) */
extern char g_799880[];   /* " ABL: Unable to AblStackHeap->malloc array string constant " */

extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0064fe70(void);
extern void __cdecl FUN_0064fc30(void);
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00562f10(void);
extern void __cdecl FUN_0069b0a0(void);

__declspec(naked) void FUN_0069b0f0(void)
{
    __asm {
        mov     eax, dword ptr [g_008058ac]
        sub     esp, 0x10
        push    ebx
        push    esi
        mov     esi, 0x9
        xor     bl, bl
        cmp     eax, esi
        push    edi
        jz      L10B
        cmp     eax, 0x8
        jnz     L119
L10B:
        mov     esi, eax
        mov     bl, 0x1
        call    FUN_00649150
        mov     eax, dword ptr [g_008058ac]
L119:
        cmp     eax, 0x2
        jnz     L198
        mov     eax, dword ptr [g_008050a0]
        test    eax, eax
        jnz     L167
        cmp     esi, 0x9
        jnz     L13A
        mov     esi, dword ptr [esp + 0x20]
        mov     eax, dword ptr [g_008050a4]
        mov     dword ptr [esi + 0x1c], eax
        jmp     L149
L13A:
        mov     ecx, dword ptr [g_008050a4]
        mov     esi, dword ptr [esp + 0x20]
        neg     ecx
        mov     dword ptr [esi + 0x1c], ecx
L149:
        mov     edx, dword ptr [g_0080d9bc]
        push    edx
        call    FUN_0064fe70
        add     esp, 0x4
        mov     dword ptr [esi + 0x3c], eax
        call    FUN_00649150
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
L167:
        cmp     esi, 0x9
        fld     dword ptr [g_008050a8]
        jz      L174
        fchs
L174:
        mov     eax, dword ptr [g_0080d9b4]
        mov     esi, dword ptr [esp + 0x20]
        push    eax
        fstp    dword ptr [esi + 0x1c]
        call    FUN_0064fe70
        add     esp, 0x4
        mov     dword ptr [esi + 0x3c], eax
        call    FUN_00649150
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
L198:
        cmp     eax, 0x1
        jnz     L35D
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     dword ptr [esp + 0x10], 0x0
        call    FUN_0064fc30
        mov     eax, dword ptr [esp + 0x10]
        add     esp, 0x4
        test    eax, eax
        jnz     L1D4
        push    0xd
        call    FUN_00562f40
        add     esp, 0x4
        call    FUN_00649150
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
L1D4:
        cmp     dword ptr [eax + 0x18], 0x1
        jz      L1F0
        push    0x16
        call    FUN_00562f40
        add     esp, 0x4
        call    FUN_00649150
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
L1F0:
        mov     ecx, dword ptr [eax + 0x3c]
        mov     edx, dword ptr [g_0080d9bc]
        cmp     ecx, edx
        jnz     L248
        cmp     esi, 0x9
        jnz     L224
        mov     eax, dword ptr [eax + 0x1c]
        mov     esi, dword ptr [esp + 0x20]
        push    edx
        mov     dword ptr [esi + 0x1c], eax
        call    FUN_0064fe70
        add     esp, 0x4
        mov     dword ptr [esi + 0x3c], eax
        call    FUN_00649150
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
L224:
        mov     ecx, dword ptr [eax + 0x1c]
        mov     esi, dword ptr [esp + 0x20]
        neg     ecx
        push    edx
        mov     dword ptr [esi + 0x1c], ecx
        call    FUN_0064fe70
        add     esp, 0x4
        mov     dword ptr [esi + 0x3c], eax
        call    FUN_00649150
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
L248:
        cmp     ecx, dword ptr [g_0080d9b8]
        jnz     L289
        test    bl, bl
        jz      L262
        push    0x15
        call    FUN_00562f40
        mov     eax, dword ptr [esp + 0x10]
        add     esp, 0x4
L262:
        mov     dl, byte ptr [eax + 0x1c]
        mov     eax, dword ptr [g_0080d9b8]
        mov     esi, dword ptr [esp + 0x20]
        push    eax
        mov     byte ptr [esi + 0x1c], dl
        call    FUN_0064fe70
        add     esp, 0x4
        mov     dword ptr [esi + 0x3c], eax
        call    FUN_00649150
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
L289:
        mov     edx, dword ptr [g_0080d9b4]
        cmp     ecx, edx
        jnz     L2DE
        cmp     esi, 0x9
        jnz     L2BA
        mov     ecx, dword ptr [eax + 0x1c]
        mov     esi, dword ptr [esp + 0x20]
        push    edx
        mov     dword ptr [esi + 0x1c], ecx
        call    FUN_0064fe70
        add     esp, 0x4
        mov     dword ptr [esi + 0x3c], eax
        call    FUN_00649150
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
L2BA:
        fld     dword ptr [eax + 0x1c]
        mov     esi, dword ptr [esp + 0x20]
        fchs
        push    edx
        fstp    dword ptr [esi + 0x1c]
        call    FUN_0064fe70
        add     esp, 0x4
        mov     dword ptr [esi + 0x3c], eax
        call    FUN_00649150
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
L2DE:
        mov     ecx, dword ptr [ecx + 0x4]
        cmp     ecx, 0x2
        jnz     L31D
        test    bl, bl
        jz      L2F8
        push    0x15
        call    FUN_00562f40
        mov     eax, dword ptr [esp + 0x10]
        add     esp, 0x4
L2F8:
        mov     edx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [eax + 0x3c]
        mov     esi, dword ptr [esp + 0x20]
        push    eax
        mov     dword ptr [esi + 0x1c], edx
        call    FUN_0064fe70
        add     esp, 0x4
        mov     dword ptr [esi + 0x3c], eax
        call    FUN_00649150
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
L31D:
        cmp     ecx, 0x3
        jnz     L519
        test    bl, bl
        jz      L338
        push    0x15
        call    FUN_00562f40
        mov     eax, dword ptr [esp + 0x10]
        add     esp, 0x4
L338:
        mov     edx, dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [eax + 0x1c]
        mov     esi, dword ptr [esp + 0x20]
        push    edx
        mov     dword ptr [esi + 0x1c], ecx
        call    FUN_0064fe70
        add     esp, 0x4
        mov     dword ptr [esi + 0x3c], eax
        call    FUN_00649150
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
L35D:
        cmp     eax, 0x4
        jnz     L504
        test    bl, bl
        jz      L374
        push    0x15
        call    FUN_00562f40
        add     esp, 0x4
L374:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_008050ac
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x1
        jnz     L3B2
        mov     ecx, dword ptr [g_0080d9b8]
        mov     al, byte ptr [g_008050ac]
        mov     esi, dword ptr [esp + 0x20]
        push    ecx
        mov     byte ptr [esi + 0x1c], al
        call    FUN_0064fe70
        add     esp, 0x4
        mov     dword ptr [esi + 0x3c], eax
        call    FUN_00649150
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
L3B2:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_008050ac
        repne   scasb
        push    ebp
        mov     ebp, dword ptr [g_008058b4]
        mov     eax, dword ptr [ebp + 0xc]
        not     ecx
        dec     ecx
        test    eax, eax
        mov     dword ptr [esp + 0x1c], ecx
        jz      L4AA
        push    eax
        inc     ecx
        push    ecx
        call    FUN_006f3c80
        mov     edi, dword ptr [ebp + 0x14]
        cmp     edi, dword ptr [ebp + 0x18]
        mov     dword ptr [esp + 0x10], eax
        jz      L400
        test    edi, edi
        jz      L3F1
        mov     dword ptr [edi], eax
L3F1:
        add     edi, 0x4
        mov     dword ptr [ebp + 0x14], edi
        mov     ebp, dword ptr [esp + 0x10]
        jmp     L4AC
L400:
        mov     esi, dword ptr [ebp + 0x10]
        mov     eax, edi
        sub     eax, esi
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x14], 0x1
        mov     dword ptr [esp + 0x18], eax
        lea     ecx, [esp + 0x14]
        jc      L423
        lea     ecx, [esp + 0x18]
L423:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x18], ecx
        jz      L441
        lea     edx, [ecx*4]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebx, eax
        jmp     L443
L441:
        xor     ebx, ebx
L443:
        mov     ecx, edi
        sub     ecx, esi
        sar     ecx, 0x2
        test    ecx, ecx
        mov     eax, ebx
        jle     L45F
        mov     edx, esi
        sub     edx, ebx
L454:
        mov     esi, dword ptr [edx + eax]
        mov     dword ptr [eax], esi
        add     eax, 0x4
        dec     ecx
        jnz     L454
L45F:
        test    eax, eax
        jz      L469
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax], ecx
L469:
        lea     esi, [eax + 0x4]
        mov     eax, edi
        sub     eax, edi
        sar     eax, 0x2
        test    eax, eax
        jle     L484
        sub     edi, esi
L479:
        mov     edx, dword ptr [edi + esi]
        mov     dword ptr [esi], edx
        add     esi, 0x4
        dec     eax
        jnz     L479
L484:
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        jz      L494
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L494:
        mov     eax, dword ptr [esp + 0x18]
        lea     ecx, [ebx + eax*4]
        mov     dword ptr [ebp + 0x10], ebx
        mov     dword ptr [ebp + 0x14], esi
        mov     dword ptr [ebp + 0x18], ecx
        mov     ebp, dword ptr [esp + 0x10]
        jmp     L4AC
L4AA:
        xor     ebp, ebp
L4AC:
        test    ebp, ebp
        mov     ebx, dword ptr [esp + 0x24]
        mov     dword ptr [ebx + 0x1c], ebp
        jnz     L4C5
        push    offset g_799880
        push    ebp
        call    FUN_00562f10
        add     esp, 0x8
L4C5:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_008050ac
        repne   scasb
        mov     eax, dword ptr [esp + 0x1c]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, ebp
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        push    eax
        rep     movsb
        call    FUN_0069b0a0
        add     esp, 0x4
        pop     ebp
        mov     dword ptr [ebx + 0x3c], eax
        call    FUN_00649150
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
L504:
        mov     ecx, dword ptr [esp + 0x20]
        push    0x15
        mov     dword ptr [ecx + 0x3c], 0x0
        call    FUN_00562f40
        add     esp, 0x4
L519:
        call    FUN_00649150
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret
    }
}
