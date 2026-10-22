/*
 * FUN_0064d3d0 (426 B) — ABL execVariable() helper. Resolves a data
 *   pointer based on a type field (this->[0x1c]) and a global scratch
 *   buffer (0x0080592c/0x28/0x30/0x34), then stores the result into
 *   the scratch buffer and optionally calls FUN_00620940.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00805928;
extern int g_0080592c;
extern int g_00805930;
extern int g_00805934;
extern int g_00805908;
extern int g_00805918;
extern int g_008058c0;
extern int g_0080d984;
extern int g_0080d9bc;
extern int g_0080d9b8;
extern int g_007f2ba8;

extern void __cdecl FUN_00562f30(int, int, const char *);
extern void __cdecl FUN_00563060(int);
extern void *__cdecl FUN_0064d200(void *);
extern int __cdecl FUN_0064c950(void *);
extern void *__cdecl FUN_00620940(void *, void *, void *);

__declspec(naked) void FUN_0064d3d0(void)
{
    __asm {
        push    ebp
        mov     ebp, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ebp + 0x1c]
        push    esi
        xor     esi, esi
        sub     eax, esi
        push    edi
        mov     edi, dword ptr [ebp + 0x3c]
        jz      Ld42c
        dec     eax
        jz      Ld3f4
        dec     eax
        jnz     Ld452
        mov     eax, dword ptr [ebp + 0x20]
        mov     ecx, dword ptr [g_00805928]
        jmp     Ld44f
    Ld3f4:
        mov     eax, dword ptr [ebp + 0x40]
        test    eax, eax
        mov     ecx, dword ptr [g_0080d984]
        jz      Ld40e
        cmp     eax, ecx
        jz      Ld40e
        mov     edx, dword ptr [eax + 0x24]
        mov     dword ptr [g_00805934], edx
    Ld40e:
        test    eax, eax
        mov     edx, dword ptr [ebp + 0x20]
        mov     esi, dword ptr [g_00805934]
        lea     esi, [esi + edx*4]
        jz      Ld452
        cmp     eax, ecx
        jz      Ld452
        mov     eax, dword ptr [ecx + 0x24]
        mov     dword ptr [g_00805934], eax
        jmp     Ld452
    Ld42c:
        mov     eax, dword ptr [g_008058c0]
        mov     ecx, dword ptr [g_00805930]
        xor     edx, edx
        mov     dl, byte ptr [ebp + 0x44]
        sub     eax, edx
        mov     edx, eax
        dec     eax
        test    edx, edx
        jle     Ld44c
    Ld445:
        inc     eax
    Ld446:
        dec     eax
        mov     ecx, dword ptr [ecx + 0x4]
        jnz     Ld446
    Ld44c:
        mov     eax, dword ptr [ebp + 0x20]
    Ld44f:
        lea     esi, [ecx + eax*4]
    Ld452:
        cmp     dword ptr [ebp + 0x18], 0x5
        jnz     Ld460
        cmp     dword ptr [edi + 0x4], 0x3
        jz      Ld460
        mov     esi, dword ptr [esi]
    Ld460:
        test    esi, esi
        setnz   cl
        push    ebx
        push    0x792d1c
        push    0x0
        push    ecx
        call    FUN_00562f30
        mov     eax, dword ptr [edi + 0x4]
        add     esp, 0xc
        cmp     eax, 0x3
        jnz     Ld4a1
        mov     ebx, dword ptr [g_0080592c]
        mov     edx, dword ptr [g_00805928]
        mov     esi, dword ptr [esi]
        add     ebx, 0x4
        add     edx, 0xa000
        cmp     ebx, edx
        mov     dword ptr [g_0080592c], ebx
        jc      Ld4c8
        jmp     Ld4be
    Ld4a1:
        mov     ebx, dword ptr [g_0080592c]
        mov     eax, dword ptr [g_00805928]
        add     ebx, 0x4
        add     eax, 0xa000
        cmp     ebx, eax
        mov     dword ptr [g_0080592c], ebx
        jc      Ld4c8
    Ld4be:
        push    0x0
        call    FUN_00563060
        add     esp, 0x4
    Ld4c8:
        mov     ecx, dword ptr [g_00805918]
        movsx   eax, byte ptr [ecx]
        inc     ecx
        cmp     eax, 0xb
        mov     dword ptr [ebx], esi
        mov     dword ptr [g_00805908], eax
        mov     dword ptr [g_00805918], ecx
        jnz     Ld4f9
    Ld4e4:
        push    edi
        call    FUN_0064d200
        mov     edi, eax
        mov     eax, dword ptr [g_00805908]
        add     esp, 0x4
        cmp     eax, 0xb
        jz      Ld4e4
    Ld4f9:
        push    edi
        call    FUN_0064c950
        mov     edx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [g_0080592c]
        add     esp, 0x4
        cmp     edx, 0x1
        jz      Ld541
        cmp     edx, 0x2
        jz      Ld541
        mov     ecx, dword ptr [edi + 0x4]
        cmp     ecx, 0x3
        jz      Ld541
        cmp     eax, dword ptr [g_0080d9bc]
        jz      Ld53b
        cmp     ecx, 0x2
        jz      Ld53b
        cmp     eax, dword ptr [g_0080d9b8]
        mov     ecx, dword ptr [esi]
        jnz     Ld53d
        mov     al, byte ptr [ecx]
        mov     byte ptr [esi], al
        jmp     Ld541
    Ld53b:
        mov     ecx, dword ptr [esi]
    Ld53d:
        mov     eax, dword ptr [ecx]
        mov     dword ptr [esi], eax
    Ld541:
        mov     ecx, dword ptr [g_007f2ba8]
        test    ecx, ecx
        pop     ebx
        jz      Ld574
        cmp     edx, 0x1
        jz      Ld574
        cmp     edx, 0x2
        jz      Ld574
        cmp     dword ptr [edi + 0x4], 0x3
        jnz     Ld56c
        mov     edx, dword ptr [esi]
        push    edx
        push    edi
        push    ebp
        call    FUN_00620940
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        ret
    Ld56c:
        push    esi
        push    edi
        push    ebp
        call    FUN_00620940
    Ld574:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        ret
    }
}
