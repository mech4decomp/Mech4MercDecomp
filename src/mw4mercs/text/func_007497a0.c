/*
 * FUN_007497A0 (173 B) — Constructor.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aadc8;                 /* DAT_008aadc8 */
extern char g_8b79ec;                /* DAT_008b79ec */
extern char g_858990;                /* DAT_00858990 */
extern int __cdecl FUN_006f3c80(int, int);
extern void FUN_00749630(void);
extern void __cdecl FUN_0075b720(void *, void *);
extern void __cdecl FUN_0075b930(void *, void *);

__declspec(naked) void *__fastcall FUN_007497a0(void *this, char *param)
{
    __asm {
        mov     eax, dword ptr [g_8aadc8]
        push    ebx
        push    ebp
        mov     ebp, ecx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        xor     ebx, ebx
        push    edi
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        mov     dword ptr [ebp + 0x18], ebx
        mov     dword ptr [ebp + 0x30], ebx
        mov     dword ptr [ebp + 0x28], ebx
        push    ecx
        mov     dword ptr [ebp + 0x38], ebx
        mov     dword ptr [ebp], ebx
        mov     dword ptr [ebp + 0x8], ebx
        mov     dword ptr [ebp + 0xc], 0x4
        mov     dword ptr [ebp + 0x1c], ebx
        mov     dword ptr [ebp + 0x20], 0x3f800000
        mov     dword ptr [ebp + 0x24], ebx
        mov     dword ptr [ebp + 0x34], ebx
        mov     dword ptr [ebp + 0x2c], ebx
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     edi, esi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebp + 0x14], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        cmp     byte ptr [g_8b79ec], bl
        jz      done
        cmp     byte ptr [g_858990], bl
        jnz     done
        mov     ecx, ebp
        call    FUN_00749630
        mov     ecx, dword ptr [ebp]
        lea     eax, [ebp + 0x28]
        push    eax
        push    ecx
        call    FUN_0075b720
        mov     eax, dword ptr [ebp]
        lea     edx, [ebp + 0x3c]
        push    edx
        push    eax
        call    FUN_0075b930
done:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     4
    }
}
