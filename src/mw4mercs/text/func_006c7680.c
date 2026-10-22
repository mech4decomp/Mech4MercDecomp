/*
 * FUN_006c7680 (409 B) — __fastcall pane update. Validates the this pointer,
 * walks the pane's child list (offset 0x84/0x80), and for each child calls
 * FUN_00717d90 to blit/update it, copying rows via rep movsd/movsb.
 * __fastcall (ECX = this), RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006bfa50(void);
extern void __cdecl FUN_006c8680(void);
extern void __cdecl FUN_00717ac0(void);
extern void __cdecl FUN_00717b30(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_00717d90(void);

__declspec(naked) void FUN_006c7680(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x3c
        push    ebx
        push    esi
        mov     esi, ecx
        cmp     esi, 0x100000
        push    edi
        jnc     L_76a5
        push    0x79e1e0
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_76a5
        int     3
L_76a5:
        mov     ebx, dword ptr [esi + 0x44]
        mov     eax, dword ptr [ebx + 0xc]
        test    eax, eax
        jnz     L_76bc
        push    0x79e1a0
        call    FUN_006bfa50
        add     esp, 0x4
L_76bc:
        xor     eax, eax
        mov     dword ptr [ebp - 0x3c], eax
        mov     dword ptr [ebp - 0x38], eax
        mov     dword ptr [ebp - 0x34], eax
        mov     dword ptr [ebp - 0x30], eax
        mov     dword ptr [ebp - 0x2c], eax
        mov     edi, dword ptr [ebx + 0xc]
        or      esi, 0xffffffff
        push    edi
        mov     dword ptr [ebp - 0x10], esi
        call    FUN_006c8680
        mov     ecx, dword ptr [edi + 0x14]
        mov     edi, dword ptr [ebx + 0x4]
        test    edi, edi
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x1c], ecx
        mov     dword ptr [ebp - 0x4], edi
        jz      L_7812
        mov     dword ptr [ebp - 0x28], eax
        mov     dword ptr [ebp - 0x24], 0x0
        fild    qword ptr [ebp - 0x28]
        fstp    dword ptr [ebp - 0x18]
        jmp     L_770b
L_7705:
        mov     edi, dword ptr [ebp - 0x4]
        mov     esi, dword ptr [ebp - 0x10]
L_770b:
        mov     ebx, dword ptr [edi + 0x84]
        cmp     ebx, esi
        jz      L_7733
        cmp     esi, -0x1
        jz      L_7720
        push    esi
        call    FUN_00717ac0
L_7720:
        lea     edx, [ebp - 0x3c]
        push    edx
        push    0x1
        mov     eax, ebx
        push    0x0
        push    eax
        mov     dword ptr [ebp - 0x10], eax
        call    FUN_00717b30
L_7733:
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [edi + 0x4]
        call    FUN_0075db4a
        mov     esi, dword ptr [ebp - 0x1c]
        mov     ebx, eax
        mov     eax, dword ptr [edi + 0x88]
        xor     ecx, ecx
        add     ebx, esi
        cmp     eax, ecx
        jz      L_775e
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0xc], edx
        jmp     L_7764
L_775e:
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0xc], ecx
L_7764:
        fld     dword ptr [edi]
        call    FUN_0075db4a
        mov     ecx, dword ptr [ebp - 0x4]
        mov     edx, dword ptr [ebp - 0x14]
        xor     esi, esi
        mov     si, word ptr [edi + 0x8e]
        xor     edi, edi
        mov     di, word ptr [ecx + 0x8c]
        mov     ecx, dword ptr [ecx + 0x84]
        mov     dword ptr [ebp - 0x24], eax
        lea     eax, [ebx + eax*4]
        push    esi
        push    edi
        push    edx
        mov     edx, dword ptr [ebp - 0x8]
        push    eax
        mov     eax, dword ptr [ebp - 0xc]
        push    edx
        push    eax
        push    ecx
        call    FUN_00717d90
        mov     ecx, dword ptr [ebp - 0x30]
        imul    ecx, dword ptr [ebp - 0x8]
        test    esi, esi
        mov     edx, dword ptr [ebp - 0x3c]
        lea     eax, [edx + ecx*4]
        jle     L_77f0
        lea     ecx, [edi*4 + 0x0]
        mov     dword ptr [ebp - 0x20], ecx
        mov     dword ptr [ebp - 0x8], esi
L_77bf:
        mov     edx, dword ptr [ebp - 0x24]
        mov     ecx, dword ptr [ebp - 0x20]
        lea     esi, [ebx + edx*4]
        mov     edx, dword ptr [ebp - 0xc]
        lea     edi, [eax + edx*4]
        mov     edx, ecx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        mov     edx, dword ptr [ebp - 0x14]
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebp - 0x30]
        lea     eax, [eax + ecx*4]
        mov     ecx, dword ptr [ebp - 0x8]
        add     ebx, edx
        dec     ecx
        mov     dword ptr [ebp - 0x8], ecx
        jnz     L_77bf
L_77f0:
        mov     edx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [edx + 0x80]
        test    eax, eax
        mov     dword ptr [ebp - 0x4], eax
        jnz     L_7705
        mov     eax, dword ptr [ebp - 0x10]
        cmp     eax, -0x1
        jz      L_7812
        push    eax
        call    FUN_00717ac0
L_7812:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
