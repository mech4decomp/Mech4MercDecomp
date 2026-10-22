/*
 * FUN_00649ae0 (405 B) - String registration / table insertion routine.
 *
 * __cdecl, one param (char *), RET (no stack cleanup).
 * Validates global counters, allocates a 0x14-byte record, copies the
 * string into a global table, and updates several global bookkeeping vars.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006faca0(void);
extern void __cdecl FUN_00648fe0(void);

extern int g_8058e8;
extern int g_8058ec;
extern int g_8058cc;
extern int g_8058c8;
extern int g_8058d0;
extern char g_7f4254;
extern int g_7b5a1c;
extern void *g_76b320;   /* IAT function pointer (strncpy) */

__declspec(naked) int __cdecl FUN_00649ae0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        xor     ebp, ebp
        cmp     ebx, ebp
        jnz     L9f2
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        ret
L9f2:
        cmp     dword ptr [g_8058e8], 0x6
        jnz     Lb03
        pop     ebp
        mov     eax, 0xfffffffe
        pop     ebx
        ret
Lb03:
        cmp     dword ptr [g_8058ec], 0x100
        jnz     Lb17
        pop     ebp
        mov     eax, 0xfffffffd
        pop     ebx
        ret
Lb17:
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      Lb39
        mov     dword ptr [eax + 0x4], ebp
        mov     dword ptr [eax + 0x10], ebp
        mov     dword ptr [eax + 0xc], ebp
        mov     dword ptr [eax + 0x8], ebp
        mov     dword ptr [eax], 0x792900
        mov     ebp, eax
Lb39:
        push    esi
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        lea     esi, [ecx + 0x1]
        push    esi
        call    FUN_004084d0
        push    esi
        mov     edi, eax
        push    ebx
        push    edi
        mov     dword ptr [ebp + 0x10], edi
        call    dword ptr [g_76b320]
        mov     eax, dword ptr [ebp + 0x4]
        lea     esi, [ebp + 0x4]
        add     esp, 0x10
        test    eax, eax
        jz      Lb8b
        push    eax
        call    FUN_006f4230
        test    edi, edi
        mov     dword ptr [esi], 0x0
        jz      Lb8b
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebp + 0x10], 0x0
Lb8b:
        lea     eax, [ebp + 0x8]
        push    eax
        push    esi
        push    ebx
        call    FUN_006faca0
        mov     edx, dword ptr [g_8058ec]
        or      ecx, 0xffffffff
        mov     esi, edx
        shl     esi, 0x8
        add     esi, 0x7f50a0
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     dword ptr [esp + 0x14], esi
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x14]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     dword ptr [g_8058cc], edx
        inc     edx
        mov     dword ptr [g_8058ec], edx
        mov     edx, dword ptr [g_8058e8]
        mov     ecx, edx
        shl     ecx, 0x5
        add     ecx, edx
        lea     edx, [edx + ecx*0x2]
        or      ecx, 0xffffffff
        shl     edx, 0x2
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     esi, [edx + 0x7f4a58]
        mov     dword ptr [esp + 0x14], esi
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x14]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     cl, byte ptr [g_8058cc]
        mov     dword ptr [edx + 0x7f4b5c], ebp
        mov     byte ptr [edx + 0x7f4b58], cl
        mov     ecx, dword ptr [g_8058e8]
        xor     eax, eax
        cmp     ecx, eax
        pop     edi
        mov     dword ptr [g_8058d0], ebp
        mov     dword ptr [edx + 0x7f4b60], eax
        pop     esi
        jle     Lc4f
        mov     ecx, dword ptr [g_8058c8]
        mov     dword ptr [edx + 0x7f4a54], ecx
Lc4f:
        inc     dword ptr [g_8058e8]
        mov     dword ptr [g_8058c8], eax
        mov     byte ptr [g_7f4254], 0x0
        mov     dword ptr [g_7b5a1c], 0x7f4254
        call    FUN_00648fe0
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret
    }
}
