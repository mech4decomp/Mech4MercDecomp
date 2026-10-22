/*
 * FUN_0060ef90 (406 B) - __thiscall (ECX = this), RET 8 (two stack params).
 * Allocates a 0x14-byte record, iterates a table via FUN_00416cc0,
 * copies strings, and updates output pointers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00613c90(void);

extern int g_7dab40;
extern int g_7dab44;

__declspec(naked) void __stdcall FUN_0060ef90(void *p1, void *p2)
{
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [esp + 0x18]
        push    ebx
        mov     ebx, dword ptr [g_7dab40]
        push    ebp
        mov     ebp, dword ptr [eax + 0x4]
        push    esi
        push    edi
        mov     edi, dword ptr [eax + 0x8]
        mov     eax, dword ptr [g_7dab44]
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, ebx
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     ebx, dword ptr [edx + 0x94]
        push    0x14
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      Lff2
        lea     eax, [ebx + 0x10]
        push    eax
        mov     ecx, esi
        call    FUN_00416bc0
        mov     dword ptr [esi], 0x779cdc
        mov     dword ptr [esp + 0x28], esi
        jmp     Lffe
Lff2:
        mov     dword ptr [esp + 0x28], 0x0
        mov     esi, dword ptr [esp + 0x28]
Lffe:
        mov     ecx, esi
        call    FUN_00416cc0
        test    eax, eax
        jz      Lf0ca
        mov     dword ptr [esp + 0x10], 0x1f6
Lf015:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      Lf029
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], 0x0
Lf029:
        push    0x0
        push    0x80
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        mov     ebx, eax
        xor     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [edx + 0xc]
        mov     edx, dword ptr [esp + 0x10]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    edx
        mov     dword ptr [ebp], ebx
        call    dword ptr [eax + 0x34]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412570
        mov     edi, dword ptr [esp + 0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        mov     edx, dword ptr [esp + 0x10]
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     eax, dword ptr [esp + 0x14]
        add     ebp, 0x4
        inc     edx
        test    eax, eax
        mov     dword ptr [esp + 0x10], edx
        jz      Lf0ad
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     Lf0ad
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
Lf0ad:
        mov     ecx, dword ptr [esp + 0x28]
        call    FUN_00416cc0
        test    eax, eax
        jnz     Lf015
        mov     edi, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x28]
Lf0ca:
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        mov     dword ptr [edi], 0x0
        jz      Lf100
        mov     dl, byte ptr [eax + 0x274]
        push    ecx
        lea     eax, [esp + 0x2c]
        mov     ecx, esp
        push    eax
        mov     byte ptr [esp + 0x30], dl
        mov     byte ptr [esp + 0x31], 0x0
        call    FUN_00412570
        mov     ecx, ebx
        call    FUN_00613c90
        mov     dword ptr [edi], eax
Lf100:
        cmp     dword ptr [edi], 0x0
        jge     Lf10b
        mov     dword ptr [edi], 0x0
Lf10b:
        test    esi, esi
        jz      Lf117
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
Lf117:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x14
        ret     0x8
    }
}
