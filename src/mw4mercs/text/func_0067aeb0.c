/*
 * FUN_0067aeb0 (365 B) — __cdecl, RET (several stack params).
 * Builds a string/object via helper calls, uses repne scasb to measure a
 * string, and constructs a result object (ESI) with FUN_0067c040.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_76b420;
extern void __cdecl FUN_00547ba0(void);
extern void __cdecl FUN_005634e0(void);
extern void __cdecl FUN_0067b110(void);
extern void __cdecl FUN_00625110(void);
extern void __cdecl FUN_005dddb0(void);
extern void __cdecl FUN_005e1c30(void);
extern void __cdecl FUN_005cbf80(void);
extern void __cdecl FUN_0067c040(void);

__declspec(naked) void __cdecl FUN_0067aeb0(void)
{
    __asm {
        sub     esp, 0x70
        push    ebx
        push    esi
        push    edi
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x13]
        xor     ebx, ebx
        push    ecx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_00547ba0
        push    0x8
        lea     ecx, [esp + 0x18]
        call    FUN_005634e0
        cmp     byte ptr [esp + 0x88], 0x1
        mov     edx, dword ptr [esp + 0x18]
        mov     byte ptr [edx], bl
        jnz     L_67af63
        lea     eax, [esp + 0x20]
        push    eax
        call    FUN_0067b110
        lea     ecx, [esp + 0x18]
        add     esp, 0x4
        cmp     eax, ecx
        jz      L_67af4e
        mov     esi, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        cmp     eax, esi
        mov     ecx, dword ptr [esp + 0x14]
        jz      L_67af2a
L_67af14:
        cmp     ecx, dword ptr [esp + 0x18]
        jz      L_67af26
        mov     dl, byte ptr [eax]
        inc     eax
        mov     byte ptr [ecx], dl
        inc     ecx
        cmp     eax, esi
        jnz     L_67af14
        jmp     L_67af2a
L_67af26:
        cmp     eax, esi
        jnz     L_67af3b
L_67af2a:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_00625110
        jmp     L_67af4e
L_67af3b:
        mov     ecx, dword ptr [esp + 0x88]
        push    ecx
        push    esi
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005dddb0
L_67af4e:
        mov     eax, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x28]
        sub     edx, eax
        push    edx
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_005e1c30
L_67af63:
        mov     eax, dword ptr [esp + 0x84]
        cmp     eax, 0xa
        push    eax
        jnc     L_67af7c
        push    0x7987d4
        lea     eax, [esp + 0x34]
        push    eax
        jmp     L_67af86
L_67af7c:
        push    0x76b9a8
        lea     ecx, [esp + 0x34]
        push    ecx
L_67af86:
        call    dword ptr [g_76b420]
        mov     edx, dword ptr [esp + 0x94]
        or      ecx, 0xffffffff
        add     esp, 0xc
        xor     eax, eax
        lea     edi, [esp + 0x2c]
        repne   scasb
        not     ecx
        dec     ecx
        lea     eax, [esp + ecx + 0x2c]
        push    edx
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_005cbf80
        mov     esi, dword ptr [esp + 0x80]
        mov     dl, byte ptr [esp + 0x1c]
        lea     eax, [esp + 0x84]
        push    eax
        lea     ecx, [esp + 0x8c]
        push    ecx
        lea     ecx, [esi + 0x8]
        mov     byte ptr [esp + 0x90], dl
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 0x4], ebx
        mov     dword ptr [esp + 0x8c], ebx
        call    FUN_00547ba0
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_0067c040
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, eax
        push    ecx
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_005e1c30
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x70
        ret
    }
}
