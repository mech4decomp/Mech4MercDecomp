/*
 * data_006f0e54.c block (util) -- 307 bytes. Log/emit driver: tears down a
 * previous context, queries a counter, then iterates a table of entries
 * (0x8449a0 / 0x844acc) dispatching through IAT function pointers, and
 * finally emits a formatted record via another IAT call.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_848d70;
extern int g_848c6c;
extern int g_848ca4;
extern int g_8449a0[];
extern int g_844acc[];
extern void *g_76b518;
extern void *g_76b500;
extern void *g_76b504;
extern void *g_76b4fc;
extern void *g_76b5ac;
extern void *g_76b524;

__declspec(naked) void FUN_006F0E60(void)
{
    __asm {
        mov     eax, dword ptr [g_848d70]
        sub     esp, 0x2c
        test    eax, eax
        je      L6F0E7D
        push    eax
        call    dword ptr [g_76b518]
        mov     dword ptr [g_848d70], 0
L6F0E7D:
        push    esi
        push    edi
        call    dword ptr [g_76b500]
        mov     edx, eax
        xor     eax, eax
        mov     ecx, 0xb
        lea     edi, [esp + 8]
        rep     stosd
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [g_848c6c]
        xor     esi, esi
        test    eax, eax
        mov     dword ptr [g_848d70], edx
        mov     dword ptr [esp + 8], 0x2c
        mov     dword ptr [esp + 0xc], 0x13
        jle     L6F0F63
        mov     edi, dword ptr [g_76b504]
        push    ebp
        mov     ebp, dword ptr [g_76b4fc]
        jmp     L6F0ED6
L6F0ED0:
        mov     edx, dword ptr [g_848d70]
L6F0ED6:
        mov     al, byte ptr [esp + 0x40]
        test    al, al
        je      L6F0F29
        mov     ecx, dword ptr [g_8449a0 + esi*4]
        lea     eax, [esi + 0xc350]
        mov     dword ptr [esp + 0x1c], eax
        lea     eax, [esp + 0xc]
        push    eax
        push    1
        push    esi
        push    edx
        mov     dword ptr [esp + 0x40], ecx
        call    edi
        mov     eax, dword ptr [g_844acc + esi*4]
        test    eax, eax
        je      L6F0F54
        mov     edx, dword ptr [g_848ca4]
        xor     ecx, ecx
        test    edx, edx
        mov     edx, dword ptr [g_848d70]
        setne   cl
        add     ecx, 0x400
        push    ecx
        push    esi
        push    edx
        call    ebp
        jmp     L6F0F54
L6F0F29:
        mov     eax, dword ptr [g_844acc + esi*4]
        test    eax, eax
        jne     L6F0F54
        mov     ecx, dword ptr [g_8449a0 + esi*4]
        lea     eax, [esi + 0xc350]
        mov     dword ptr [esp + 0x1c], eax
        lea     eax, [esp + 0xc]
        push    eax
        push    1
        push    esi
        push    edx
        mov     dword ptr [esp + 0x40], ecx
        call    edi
L6F0F54:
        mov     eax, dword ptr [g_848c6c]
        inc     esi
        cmp     esi, eax
        jl      L6F0ED0
        pop     ebp
L6F0F63:
        call    dword ptr [g_76b5ac]
        mov     ecx, dword ptr [esp + 0x38]
        push    0
        push    ecx
        mov     edx, eax
        shr     edx, 0x10
        push    0
        movsx   ecx, dx
        movsx   edx, ax
        mov     eax, dword ptr [g_848d70]
        push    ecx
        push    edx
        push    0
        push    eax
        call    dword ptr [g_76b524]
        pop     edi
        pop     esi
        add     esp, 0x2c
        ret
    }
}
