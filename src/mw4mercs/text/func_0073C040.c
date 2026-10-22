/*
 * data_0073a900.c block (gameplay) -- 306 bytes of small accessor/predicate
 * functions reading global state (flags/counters) and one string-copy helper.
 * Transcribed as a single naked block.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aaeb8;
extern int g_8aaebc;
extern char g_7b7069;
extern int g_8aaee4;
extern int g_7b73e0;
extern int g_8aaee8;
extern int g_8aaeec;
extern int g_87b688;
extern int g_7b73e4;
extern int g_8aaeb4;
extern int g_85b610;
extern int g_85a270;
extern int g_85b608;
extern char g_859bac[];
extern char g_7a1d60[];

__declspec(naked) void FUN_0073C040(void)
{
    __asm {
        mov     ecx, dword ptr [g_8aaeb8]
        xor     eax, eax
        test    ecx, ecx
        setne   al
        ret
        nop
        nop
        mov     ecx, dword ptr [g_8aaebc]
        xor     eax, eax
        test    ecx, ecx
        setne   al
        ret
        nop
        nop
        mov     cl, byte ptr [g_7b7069]
        xor     eax, eax
        test    cl, cl
        sete    al
        ret
        nop
        nop
        mov     ecx, dword ptr [g_8aaee4]
        xor     eax, eax
        cmp     ecx, 1
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_7b73e0]
        xor     eax, eax
        cmp     ecx, 1
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_8aaee8]
        xor     eax, eax
        test    ecx, ecx
        setne   al
        ret
        nop
        nop
        mov     ecx, dword ptr [g_8aaeec]
        xor     eax, eax
        test    ecx, ecx
        setne   al
        ret
        nop
        nop
        mov     ecx, dword ptr [g_87b688]
        xor     eax, eax
        cmp     ecx, 1
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_87b688]
        xor     eax, eax
        cmp     ecx, 0xb
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_87b688]
        xor     eax, eax
        cmp     ecx, 2
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_87b688]
        xor     eax, eax
        cmp     ecx, 7
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_87b688]
        xor     eax, eax
        cmp     ecx, 8
        sete    al
        ret
        nop
        mov     ecx, dword ptr [g_7b73e4]
        xor     eax, eax
        test    ecx, ecx
        setne   al
        ret
        nop
        nop
        mov     eax, dword ptr [g_8aaeb4]
        mov     ecx, dword ptr [g_87b688]
        mov     dword ptr [g_85b610], eax
        mov     eax, 4
        cmp     ecx, eax
        jne     L73C134
        mov     dword ptr [g_87b688], 0
        ret
L73C134:
        push    esi
        push    edi
        or      ecx, 0xffffffff
        mov     dword ptr [g_87b688], eax
        xor     eax, eax
        mov     edi, offset g_7a1d60
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, offset g_859bac
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        pop     edi
        mov     dword ptr [g_85a270], 1
        mov     dword ptr [g_85b608], eax
        pop     esi
        ret
    }
}
