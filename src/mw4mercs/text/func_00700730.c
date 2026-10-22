/*
 * FUN_00700730 (192 B) - CMWGun2::StartUp().
 *
 * Initializes a gun object (copies a 16-bit value from 0x8589D0 into
 * +0x10, zeroes +0x218/+0x220/+0x21C, sets +0x224 = 0x40668000,
 * clears +0x228, copies the string "0" into +0x229), then calls
 * FUN_00740860(0,0), allocates via FUN_004084D0(0x2F484), stores the
 * result into global 0x856860, and calls FUN_006FCF00. On failure
 * (< 0) it formats an error via FUN_006FABF0 and returns 0; else
 * returns 1.
 *
 * __stdcall, RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_8589d0;
extern char g_77a388[];
extern char g_7a0e2c[];
extern int g_856860;
extern void __cdecl FUN_00740860(int, int);
extern int __cdecl FUN_004084d0(int);
extern void __cdecl FUN_006fce40(void);
extern int __cdecl FUN_006fcf00(int);
extern int __cdecl FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(char *, int, int);

__declspec(naked) int __stdcall FUN_00700730(void *param)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 8]
        mov     cx, word ptr [g_8589d0]
        mov     word ptr [eax + 0x10], cx
        push    ebx
        xor     ebx, ebx
        push    esi
        push    edi
        mov     dword ptr [eax + 0x218], ebx
        or      ecx, 0xffffffff
        mov     dword ptr [eax + 0x220], ebx
        mov     dword ptr [eax + 0x21c], ebx
        mov     dword ptr [eax + 0x224], 0x40668000
        mov     byte ptr [eax + 0x228], bl
        lea     edx, [eax + 0x229]
        xor     eax, eax
        mov     edi, offset g_77a388
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        push    ebx
        and     ecx, 3
        push    ebx
        rep     movsb
        call    FUN_00740860
        push    0x2f484
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        jz      loc_b1
        mov     ecx, eax
        call    FUN_006fce40
        jmp     loc_b3
loc_b1:
        xor     eax, eax
loc_b3:
        push    eax
        mov     dword ptr [g_856860], eax
        call    FUN_006fcf00
        mov     esi, eax
        cmp     esi, ebx
        jge     loc_e7
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    offset g_7a0e2c
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      loc_de
        int     3
loc_de:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        pop     ebp
        ret     4
loc_e7:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        pop     ebp
        ret     4
    }
}
