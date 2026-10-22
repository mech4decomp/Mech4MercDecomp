/*
 * FUN_005436F0 (947 B) ??? Complex serialization/update function.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041ee70(int);
extern void __stdcall FUN_0041eae0(int);
extern void __stdcall FUN_0041ec50(int, int);
extern void __stdcall FUN_0041ea10(void);
extern void __stdcall FUN_0041f030(int, int);
extern void __stdcall FUN_0041ef60(void);
extern void __stdcall FUN_004ce190(int, int, int, int);

__declspec(naked) void __stdcall FUN_005436f0(int param_1)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db094;
__asm {
sub     esp, 0x38
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x17]
        test    al, al
        jz      loc_543a9e
        push    ebx
        push    edi
        push    0x0
        lea     ecx, [esp + 0x20]
        call    FUN_0041ee70
        lea     eax, [esi + 0x3518]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_0041eae0
        push    0x20
        lea     ecx, [esi + 0x351c]
        push    ecx
        lea     ecx, [esp + 0x24]
        call    FUN_0041ec50
        lea     edx, [esi + 0x3520]
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_0041eae0
        push    0x20
        lea     eax, [esi + 0x3524]
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_0041ec50
        lea     ecx, [esi + 0x3528]
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_0041eae0
        push    0x20
        lea     edx, [esi + 0x352c]
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0041ec50
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        mov eax, dword ptr [edx + 0x1800]
        push    0x8
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x20], eax
        call    FUN_0041ec50
        xor     eax, eax
        mov     dword ptr [esp + 0x10], eax

loc_5437aa:
        mov     edx, eax
        shl     edx, 0x7
        add     edx, eax
        shl     edx, 0x3
        sub     edx, eax
        mov cl, byte ptr [esi + edx*0x8 + 0x3538]
        test    cl, cl
        jz      loc_543884
        push    0x8
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_0041ec50
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        lea edx, [esi + ecx*0x8 + 0x3554]
        push    0x8
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0041ec50
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        lea edx, [esi + ecx*0x8 + 0x353a]
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_0041eae0
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        lea edx, [esi + ecx*0x8 + 0x353b]
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_0041eae0
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        lea edx, [esi + ecx*0x8 + 0x3548]
        push    0x4
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0041ec50
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        lea edx, [esi + ecx*0x8 + 0x355c]
        push    0x8
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0041ec50
        mov     eax, dword ptr [esp + 0x10]

loc_543884:
        inc     eax
        cmp     eax, 0xff
        mov     dword ptr [esp + 0x10], eax
        jl      loc_5437aa

        xor     eax, eax
        mov     dword ptr [esp + 0x10], eax

loc_54389a:
        mov     ecx, eax
        imul    ecx, ecx, 0x22ac
        mov dl, byte ptr [ecx + esi*0x1 + 0x205f34]
        test    dl, dl
        jz      loc_5439d5
        push    0x8
        lea     edx, [esp + 0x14]
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0041ec50
        mov     eax, dword ptr [esp + 0x10]
        imul    eax, eax, 0x22ac
        lea ecx, [eax + esi*0x1 + 0x205f3c]
        push    0x8
        push    ecx
        lea     ecx, [esp + 0x24]
        call    FUN_0041ec50
        mov     edx, dword ptr [esp + 0x10]
        imul    edx, edx, 0x22ac
        lea eax, [edx + esi*0x1 + 0x205f35]
        test    eax, eax
        setnz   cl
        lea     edx, [esp + 0xf]
        mov     byte ptr [esp + 0xf], cl
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_0041eae0
        mov     eax, dword ptr [esp + 0x10]
        imul    eax, eax, 0x22ac
        lea ecx, [eax + esi*0x1 + 0x205f38]
        push    0x4
        push    ecx
        lea     ecx, [esp + 0x24]
        call    FUN_0041ec50
        lea     ecx, [esp + 0x1c]
        call    FUN_0041ea10
        mov     edx, dword ptr [esp + 0x10]
        imul    edx, edx, 0x22ac
        or      ecx, 0xffffffff
        xor     eax, eax
        lea edi, [edx + esi*0x1 + 0x205d34]
        repne scasb
        not     ecx
        push    0x4
        lea     eax, [esp + 0x18]
        mov     dword ptr [esp + 0x18], ecx
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_0041f030
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        imul    edx, edx, 0x22ac
        push    ecx
        lea eax, [edx + esi*0x1 + 0x205d34]
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_0041f030
        lea     ecx, [esp + 0x1c]
        call    FUN_0041ea10
        mov     ecx, dword ptr [esp + 0x10]
        imul    ecx, ecx, 0x22ac
        lea edi, [ecx + esi*0x1 + 0x205e34]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        push    0x4
        lea     edx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], ecx
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0041f030
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        imul    ecx, ecx, 0x22ac
        lea edx, [ecx + esi*0x1 + 0x205e34]
        push    eax
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x10]

loc_5439d5:
        inc     eax
        cmp     eax, 0x18
        mov     dword ptr [esp + 0x10], eax
        jl      loc_54389a

        mov     eax, dword ptr [esp + 0x34]
        sub     eax, dword ptr [esp + 0x2c]
        jz      loc_543a93
        xor     ebx, ebx
        push    ebp
        mov     edi, 0x8
        add     esi, 0x353b

loc_5439ff:
        mov     al, byte ptr [esi + -0x3]
        test    al, al
        jz      loc_543a7c
        cmp     byte ptr [esi], 0x0
        jnz     loc_543a7c
        mov edx, dword ptr [DAT_007db094]
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        cmp     ebx, ecx
        jz      loc_543a7c
        mov eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [eax]
        mov eax, dword ptr [DAT_007dab40]
        mov     ebp, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x38]
        xor     edx, eax
        mov     eax, dword ptr [edx + 0x14]
        add     edx, 0x14
        sub     ecx, ebp
        xor     eax, 0x85739531
        mov eax, dword ptr [eax + 0x1814]
        mov ebp, dword ptr [edi + eax*0x1 + 0x3c3c]
        add     eax, 0x3c3c
        shl     ecx, 0x3
        add     ebp, ecx
        mov dword ptr [edi + eax*0x1], ebp
        mov ebp, dword ptr [eax + 0xc00]
        add     ebp, ecx
        push    0x1
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [edx]
        push    0x28
        push    ebx
        xor     ecx, 0x85739531
        mov dword ptr [eax + 0xc00], ebp
        call    FUN_004ce190

loc_543a7c:
        add     edi, 0x4
        inc     ebx
        add     esi, 0x2038
        cmp     edi, 0x404
        jl      loc_5439ff
        pop     ebp

loc_543a93:
        lea     ecx, [esp + 0x1c]
        call    FUN_0041ef60
        pop     edi
        pop     ebx

loc_543a9e:
        pop     esi
        add     esp, 0x38
        ret
    }


}
