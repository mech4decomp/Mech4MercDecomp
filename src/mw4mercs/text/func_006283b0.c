/*
 * FUN_006283b0 (484 B) -- ABL interpreter object setup/init. __thiscall,
 * RET 0x4 (1 stack arg = the ABL object pointer).
 *
 * Initializes a string buffer (this+0x5c), registers the object, copies
 * name/string data into this+0xf0, resolves a compare result, and calls
 * into the ABL runtime (FUN_00560420 / FUN_0063fae0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0063fbc0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_0063fae0(void);

extern int g_007f25c0;   /* DAT_007f25c0 */
extern int g_007f1f84;   /* DAT_007f1f84 */

__declspec(naked) void FUN_006283b0(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, ecx
        push    esi
        lea     esi, [ebp + 0x5c]
        push    edi
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L283CB
        mov     ecx, esi
        call    FUN_0041fcb0
L283CB:
        mov     ebx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ebp + 0x12c]
        push    ebx
        call    FUN_0063fbc0
        test    ebx, ebx
        jz      L28537
        push    ebx
        mov     ecx, esi
        call    FUN_0041fcd0
        mov     eax, dword ptr [ebp + 0x160]
        lea     esi, [eax + 0x64]
        mov     ecx, esi
        call    FUN_0041fcb0
        push    ebx
        mov     ecx, esi
        call    FUN_0041fcd0
        mov     eax, dword ptr [ebp + 0x144]
        lea     esi, [eax + 0x50]
        mov     ecx, esi
        call    FUN_0041fcb0
        push    ebx
        mov     ecx, esi
        call    FUN_0041fcd0
        mov     esi, dword ptr [ebp + 0x164]
        test    esi, esi
        jz      L28449
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x60]
        mov     edi, eax
        test    edi, edi
        jz      L28450
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x60]
        test    eax, eax
        jz      L28450
        xor     ecx, ecx
        cmp     eax, edi
        setnz   cl
        inc     ecx
        mov     eax, ecx
        jmp     L28450
L28449:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x60]
L28450:
        mov     ecx, dword ptr [ebp + 0x10c]
        mov     edx, dword ptr [ebp + 0x12c]
        mov     dword ptr [ecx + 0x74], eax
        mov     dword ptr [ebp + 0xf4], eax
        mov     dword ptr [edx + 0x70], eax
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x24]
        test    eax, eax
        jz      L2849F
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x24]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, dword ptr [ebp + 0xf0]
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        jmp     L284A8
L2849F:
        mov     ecx, dword ptr [ebp + 0xf0]
        mov     byte ptr [ecx], 0x0
L284A8:
        mov     eax, dword ptr [g_007f25c0]
        mov     esi, dword ptr [ebx + 0x4]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L284C8
        lea     edx, [ebx + 0x30c]
        mov     dword ptr [ebp + 0xe8], edx
L284C8:
        mov     eax, dword ptr [g_007f1f84]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L28521
        fld     dword ptr [ebx + 0x3b8]
        lea     eax, [ebx + 0x944]
        mov     dword ptr [ebp + 0xe4], eax
        mov     al, byte ptr [ebx + 0xdc]
        test    al, al
        fstp    dword ptr [ebp + 0xec]
        jz      L28566
        mov     edi, dword ptr [ebx + 0x2c]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [ebp + 0xf0]
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        jmp     L28566
L28521:
        mov     dword ptr [ebp + 0xe4], 0x0
        mov     dword ptr [ebp + 0xec], 0xbf800000
        jmp     L28566
L28537:
        mov     eax, dword ptr [ebp + 0xf0]
        mov     byte ptr [eax], 0x0
        mov     eax, dword ptr [ebp + 0x160]
        lea     ecx, [eax + 0x64]
        mov     dword ptr [ebp + 0xec], 0x0
        call    FUN_0041fcb0
        mov     eax, dword ptr [ebp + 0x144]
        lea     ecx, [eax + 0x50]
        call    FUN_0041fcb0
L28566:
        mov     ecx, dword ptr [ebp + 0xf0]
        mov     esi, dword ptr [ebp + 0x12c]
        push    0x0
        push    0x0
        push    ecx
        mov     ecx, dword ptr [esi + 0x68]
        call    FUN_00560420
        mov     edx, dword ptr [ebp + 0xec]
        push    edx
        mov     ecx, esi
        call    FUN_0063fae0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
