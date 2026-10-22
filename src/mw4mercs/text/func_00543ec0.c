/*
 * FUN_00543EC0 (447 B) — Builds a formatted string from counters.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * Returns char* (in EAX).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_004084d0(int);
extern void __stdcall FUN_004084e0(int);

__declspec(naked) void __stdcall FUN_00543ec0(int param_1)
{
    
__asm {
sub     esp, 0x30
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [esi + 0x16]
        xor     eax, eax
        test    cl, cl
        jz      loc_544078
        mov     ecx, dword ptr [esi + 0x50]
        mov     edx, dword ptr [ecx + 0xe4]
        test    edx, edx
        jz      loc_544078
        push    edi
        mov     ecx, 0x8
        lea     edi, [esp + 0x20]
        rep stosd
        lea     eax, [esi + 0x3548]
        mov     edx, 0xff

loc_543efd:
        mov     cl, byte ptr [eax + -0x10]
        test    cl, cl
        jz      loc_543f16
        mov     ecx, dword ptr [eax]
        cmp     ecx, 0x8
        jz      loc_543f16
        mov     edi, dword ptr [esp + ecx*0x4 + 0x20]
        lea     ecx, [esp + ecx*0x4 + 0x20]
        inc     edi
        mov     dword ptr [ecx], edi

loc_543f16:
        add     eax, 0x2038
        dec     edx
        jnz     loc_543efd

        lea     eax, [esi + 0x205f38]
        mov     edx, 0x18

loc_543f29:
        mov     cl, byte ptr [eax + -0x4]
        test    cl, cl
        jz      loc_543f42
        mov     ecx, dword ptr [eax]
        cmp     ecx, 0x8
        jz      loc_543f42
        mov     edi, dword ptr [esp + ecx*0x4 + 0x20]
        lea     ecx, [esp + ecx*0x4 + 0x20]
        inc     edi
        mov     dword ptr [ecx], edi

loc_543f42:
        add     eax, 0x22ac
        dec     edx
        jnz     loc_543f29

        push    0x100
        call    FUN_004084d0
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        mov     ebx, eax
        push    0x2eb
        mov     ecx, esi
        mov     byte ptr [ebx], 0x0
        xor     ebp, ebp
        call    dword ptr [edx + 0x34]
        mov     edx, eax
        xor     eax, eax
        or      ecx, 0xffffffff
        mov     edi, edx
        repne scasb
        not     ecx
        mov     dword ptr [esp + 0x14], eax
        dec     ecx
        lea     eax, [esp + 0x20]
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x10], eax

loc_543f8c:
        mov     ecx, dword ptr [esp + 0x10]
        cmp     dword ptr [ecx], 0x0
        jz      loc_544039
        test    ebp, ebp
        jz      loc_543fab
        mov     byte ptr [ebx + ebp*0x1], 0x3b
        inc     ebp
        mov     byte ptr [ebx + ebp*0x1], 0x20
        inc     ebp
        mov     byte ptr [ebx + ebp*0x1], 0x0

loc_543fab:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, ebx
        repne scasb
        mov     al, byte ptr [esp + 0x14]
        dec     edi
        mov     ecx, edx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        add     ebp, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [ecx]
        mov     byte ptr [ebx + ebp*0x1], 0x20
        inc     ebp
        add     al, 0x31
        mov     byte ptr [ebx + ebp*0x1], al
        inc     ebp
        mov     byte ptr [ebx + ebp*0x1], 0x20
        inc     ebp
        mov     byte ptr [ebx + ebp*0x1], 0x28
        inc     ebp
        cmp     ecx, 0x9
        jle     loc_544024
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        add     dl, 0x30
        mov     byte ptr [ebx + ebp*0x1], dl
        mov     eax, ecx
        cdq
        mov     ecx, 0xa
        idiv    ecx
        inc     ebp
        add     dl, 0x30
        mov     byte ptr [ebx + ebp*0x1], dl
        jmp     loc_54402f

loc_544024:
        mov     edx, dword ptr [esp + 0x10]
        mov     al, byte ptr [edx]
        add     al, 0x30
        mov     byte ptr [ebx + ebp*0x1], al

loc_54402f:
        mov     edx, dword ptr [esp + 0x1c]
        inc     ebp
        mov     byte ptr [ebx + ebp*0x1], 0x29
        inc     ebp

loc_544039:
        mov     eax, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esp + 0x10]
        inc     eax
        add     esi, 0x4
        cmp     eax, 0x8
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], esi
        jl      loc_543f8c

        test    ebp, ebp
        pop     edi
        jz      loc_54406d
        mov     byte ptr [ebx + ebp*0x1], 0x2e
        pop     esi
        mov     byte ptr [ebx + ebp*0x1 + 0x1], 0x0
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x30
        ret

loc_54406d:
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
        xor     eax, eax

loc_544078:
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret
    }


}
