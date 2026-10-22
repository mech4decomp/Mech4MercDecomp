/*
 * FUN_006e0620 (316 B) — Load a count/version from a stream and (re)allocate
 * a 100-rounded element array on `this`.
 *
 * Reads a version int via virtual method (vtable+0x20); asserts if < 6.
 * Reads a count, rounds up to a multiple of 100, reallocs the array at
 * [this+0x110] (copying the min(old,new) elements), then fills each element
 * via FUN_006e1150.
 *
 * __cdecl (ECX = this), RET 4 (one stream param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_79eae0[];   /* "The current fgd-file is a version lower than 6..." */
extern void __cdecl FUN_006fab90(const char *fmt, ...);
extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_004084e0(void *p);
extern int __cdecl FUN_006e1150(void *this, int a);

__declspec(naked) void __cdecl FUN_006e0620(void *this, void *stream)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    4
        lea     ecx, [ebp - 4]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        cmp     dword ptr [ebp - 4], 6
        jge     loc_6e0653
        push    offset g_79eae0
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      loc_6e0653
        int     3
loc_6e0653:
        mov     edx, dword ptr [esi]
        push    4
        lea     ebx, [edi + 4]
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [ebx]
        mov     eax, 0x51eb851f
        imul    ecx
        sar     edx, 5
        mov     eax, edx
        shr     eax, 0x1f
        lea     eax, [edx + eax + 1]
        lea     eax, [eax + eax*4]
        lea     esi, [eax + eax*4]
        mov     eax, dword ptr [edi + 0x114]
        shl     esi, 2
        cmp     esi, eax
        mov     dword ptr [edi], esi
        jz      loc_6e0724
        test    esi, esi
        jbe     loc_6e0705
        lea     ecx, [esi*4 + 0]
        push    ecx
        call    FUN_004084d0
        mov     ecx, eax
        mov     eax, dword ptr [edi + 0x110]
        add     esp, 4
        test    eax, eax
        mov     dword ptr [ebp - 0x10], ecx
        jz      loc_6e06fd
        mov     eax, dword ptr [edi + 0x114]
        cmp     esi, eax
        jnc     loc_6e06bd
        mov     eax, esi
loc_6e06bd:
        mov     edx, eax
        dec     eax
        test    edx, edx
        mov     dword ptr [ebp - 8], eax
        jz      loc_6e06eb
        mov     edx, dword ptr [edi + 0x110]
        sub     edx, ecx
        lea     eax, [ecx + eax*4]
        mov     ecx, dword ptr [ebp - 8]
        mov     dword ptr [ebp - 0xc], edx
        inc     ecx
        jmp     loc_6e06de
loc_6e06db:
        mov     edx, dword ptr [ebp - 0xc]
loc_6e06de:
        mov     edx, dword ptr [edx + eax]
        mov     dword ptr [eax], edx
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      loc_6e06db
loc_6e06eb:
        mov     eax, dword ptr [edi + 0x110]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [ebp - 0x10]
        add     esp, 4
loc_6e06fd:
        mov     dword ptr [edi + 0x110], ecx
        jmp     loc_6e071e
loc_6e0705:
        mov     eax, dword ptr [edi + 0x110]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 0x110], 0
loc_6e071e:
        mov     dword ptr [edi + 0x114], esi
loc_6e0724:
        mov     eax, dword ptr [ebx]
        xor     esi, esi
        test    eax, eax
        jle     loc_6e0753
loc_6e072c:
        mov     ecx, dword ptr [edi + 0x110]
        mov     eax, dword ptr [ebp - 4]
        lea     edx, [ecx + esi*4]
        mov     ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov     ecx, edi
        mov     dword ptr [ebp - 0x10], edx
        call    FUN_006e1150
        mov     edx, dword ptr [ebp - 0x10]
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [ebx]
        inc     esi
        cmp     esi, eax
        jl      loc_6e072c
loc_6e0753:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
