/*
 * FUN_0064A0E0 (312 B) — __cdecl, one stack param, RET.
 * Allocates a code segment from the ABL heap, appends it to a vector, and
 * copies the ring-buffer contents into it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_00805914;
extern int DAT_00805910;
extern int DAT_008058bc;
extern void *__cdecl FUN_006f3c80(int size, int context);
extern void *__cdecl FUN_004084d0(void);
extern int __cdecl FUN_0061ef00(int a, int b, int c, int d, int e);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_00562f10(int param1, const char *str);

__declspec(naked) void __cdecl FUN_0064a0e0(void)
{
    __asm {
        mov     eax, dword ptr [DAT_00805914]
        mov     ecx, dword ptr [esp + 4]
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [DAT_008058bc]
        push    esi
        sub     eax, dword ptr [DAT_00805910]
        inc     eax
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [ebx + 0xc]
        test    ecx, ecx
        push    edi
        jz      L_a214
        push    ecx
        push    eax
        call    FUN_006f3c80
        mov     esi, dword ptr [ebx + 0x14]
        cmp     esi, dword ptr [ebx + 0x18]
        mov     dword ptr [esp + 0xc], eax
        jz      L_a12d
        test    esi, esi
        jz      L_a122
        mov     dword ptr [esi], eax
    L_a122:
        add     esi, 4
        mov     dword ptr [ebx + 0x14], esi
        jmp     L_a1d0
    L_a12d:
        mov     edi, dword ptr [ebx + 0x10]
        mov     eax, esi
        sub     eax, edi
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      L_a150
        lea     ecx, [esp + 0x14]
    L_a150:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        push    ebp
        mov     dword ptr [esp + 0x18], ecx
        jz      L_a16f
        lea     edx, [ecx*4]
        push    edx
        call    FUN_004084d0
        add     esp, 4
        mov     ebp, eax
        jmp     L_a171
    L_a16f:
        xor     ebp, ebp
    L_a171:
        mov     eax, dword ptr [esp + 0x20]
        push    0
        push    eax
        push    ebp
        push    esi
        push    edi
        call    FUN_0061ef00
        add     esp, 0x14
        test    eax, eax
        jz      L_a18d
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax], ecx
    L_a18d:
        mov     ecx, esi
        sub     ecx, esi
        add     eax, 4
        sar     ecx, 2
        test    ecx, ecx
        mov     edi, eax
        jle     L_a1aa
    L_a19d:
        sub     esi, eax
    L_a19f:
        mov     edx, dword ptr [esi + edi]
        mov     dword ptr [edi], edx
        add     edi, 4
        dec     ecx
        jnz     L_a19f
    L_a1aa:
        mov     eax, dword ptr [ebx + 0x10]
        test    eax, eax
        jz      L_a1ba
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_a1ba:
        mov     eax, dword ptr [esp + 0x18]
        lea     ecx, [ebp + eax*4]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [ebx + 0x10], ebp
        mov     dword ptr [ebx + 0x14], edi
        mov     dword ptr [ebx + 0x18], ecx
        pop     ebp
    L_a1d0:
        test    eax, eax
        mov     ebx, eax
        jnz     L_a1e5
    L_a1d6:
        push    0x792a08
        push    0
        call    FUN_00562f10
        add     esp, 8
    L_a1e5:
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [edx]
        test    ecx, ecx
        mov     eax, dword ptr [DAT_00805910]
        jle     L_a206
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, eax
        mov     edi, ebx
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
    L_a206:
        pop     edi
        mov     dword ptr [DAT_00805914], eax
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0xc
        ret
    L_a214:
        xor     ebx, ebx
        jmp     L_a1d6
    }
}
