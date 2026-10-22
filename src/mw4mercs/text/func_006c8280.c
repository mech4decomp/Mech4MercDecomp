/*
 * FUN_006c8280 (515 B) — __fastcall pane blit. Formats a "User Pane" label
 * via sprintf, then tiles the pane's region (width/height at +0x10/+0x14)
 * into 0x80/0x100-aligned blocks, calling FUN_006c7970 / FUN_006c7ba0 to
 * blit each block. __fastcall (ECX = this), RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (*g_0076b420)(void);          /* IAT: sprintf */
extern char g_0083a108;                  /* sprintf buffer */

extern void __cdecl FUN_006c8590(void);
extern void __cdecl FUN_006c7900(void);
extern void __cdecl FUN_006c7970(void);
extern void __cdecl FUN_006c7ba0(void);

__declspec(naked) void FUN_006c8280(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx + 0x44]
        mov     eax, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        push    eax
        call    FUN_006c8590
        mov     edx, eax
        test    edx, edx
        jnz     L_82b6
        mov     esi, dword ptr [ebp + 0x10]
        mov     edi, dword ptr [ebp + 0x14]
        push    esi
        push    edi
        push    0x79e204
        push    0x83a108
        call    dword ptr [g_0076b420]
        add     esp, 0x10
        jmp     L_82f6
L_82b6:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        jz      L_82d3
L_82c4:
        cmp     byte ptr [ecx + edx], 0x5c
        jz      L_82cf
        dec     ecx
        jnz     L_82c4
        jmp     L_82d3
L_82cf:
        test    ecx, ecx
        jnz     L_82d6
L_82d3:
        or      ecx, 0xffffffff
L_82d6:
        mov     esi, dword ptr [ebp + 0x10]
        mov     edi, dword ptr [ebp + 0x14]
        push    esi
        push    edi
        lea     ecx, [ecx + edx + 0x1]
        push    ecx
        push    0x79e1f8
        push    0x83a108
        call    dword ptr [g_0076b420]
        add     esp, 0x14
L_82f6:
        xor     ecx, ecx
        test    edi, edi
        mov     dword ptr [esp + 0x10], ecx
        jbe     L_83b8
L_8304:
        sub     edi, ecx
        cmp     edi, 0x100
        mov     ebp, 0x100
        ja      L_8315
        mov     ebp, edi
L_8315:
        mov     edx, ebp
        and     edx, 0xff
        cmp     edx, 0x80
        jle     L_832a
        mov     ebp, 0x80
L_832a:
        xor     edi, edi
        test    esi, 0xffffff00
        jbe     L_83a4
L_8334:
        sub     esi, edi
        cmp     esi, 0x100
        jbe     L_8343
        mov     esi, 0x100
L_8343:
        mov     eax, esi
        and     eax, 0xff
        cmp     eax, 0x80
        jle     L_8356
        mov     esi, 0x80
L_8356:
        mov     eax, esi
        or      eax, ebp
        lea     edx, [eax - 0x1]
        test    edx, eax
        push    esi
        jnz     L_8382
        mov     ecx, ebx
        call    FUN_006c7900
        push    0x0
        push    ebp
        push    0x0
        push    0x0
        push    eax
        mov     eax, dword ptr [esp + 0x24]
        push    esi
        push    ebp
        push    edi
        push    eax
        mov     ecx, ebx
        call    FUN_006c7970
        jmp     L_838c
L_8382:
        push    ebp
        push    edi
        push    ecx
        mov     ecx, ebx
        call    FUN_006c7ba0
L_838c:
        mov     ecx, dword ptr [ebx + 0x44]
        add     edi, esi
        mov     esi, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, esi
        and     edx, 0xffffff00
        cmp     edi, edx
        jc      L_8334
L_83a4:
        mov     eax, dword ptr [ebx + 0x44]
        mov     edi, dword ptr [eax + 0x14]
        add     ecx, ebp
        cmp     ecx, edi
        mov     dword ptr [esp + 0x10], ecx
        jc      L_8304
L_83b8:
        mov     ecx, dword ptr [ebx + 0x44]
        mov     eax, dword ptr [ecx + 0x10]
        mov     edx, eax
        and     edx, 0xffffff00
        cmp     edx, eax
        mov     dword ptr [esp + 0x10], edx
        jnc     L_847d
L_83d2:
        sub     eax, edx
        cmp     eax, 0x100
        mov     ebp, 0x100
        ja      L_83e2
        mov     ebp, eax
L_83e2:
        mov     eax, ebp
        and     eax, 0xff
        cmp     eax, 0x80
        jle     L_83f5
        mov     ebp, 0x80
L_83f5:
        mov     eax, dword ptr [ecx + 0x14]
        xor     edi, edi
        test    eax, eax
        jbe     L_8469
L_83fe:
        sub     eax, edi
        cmp     eax, 0x100
        mov     esi, 0x100
        ja      L_840e
        mov     esi, eax
L_840e:
        mov     ecx, esi
        and     ecx, 0xff
        cmp     ecx, 0x80
        jle     L_8423
        mov     esi, 0x80
L_8423:
        mov     eax, ebp
        or      eax, esi
        lea     ecx, [eax - 0x1]
        test    ecx, eax
        push    ebp
        jnz     L_844f
        mov     ecx, ebx
        call    FUN_006c7900
        mov     edx, dword ptr [esp + 0x10]
        push    0x0
        push    esi
        push    0x0
        push    0x0
        push    eax
        push    ebp
        push    esi
        push    edx
        push    edi
        mov     ecx, ebx
        call    FUN_006c7970
        jmp     L_8459
L_844f:
        push    esi
        push    edx
        push    edi
        mov     ecx, ebx
        call    FUN_006c7ba0
L_8459:
        mov     eax, dword ptr [ebx + 0x44]
        mov     eax, dword ptr [eax + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        add     edi, esi
        cmp     edi, eax
        jc      L_83fe
L_8469:
        mov     ecx, dword ptr [ebx + 0x44]
        mov     eax, dword ptr [ecx + 0x10]
        add     edx, ebp
        cmp     edx, eax
        mov     dword ptr [esp + 0x10], edx
        jc      L_83d2
L_847d:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
