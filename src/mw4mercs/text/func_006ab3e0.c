/*
 * FUN_006ab3e0 (444 B) — __thiscall animation/weight update. Calls two
 * virtual methods to fetch values, normalizes them against constants,
 * sums them, and writes the result into a set of object fields.
 *
 * __thiscall (ECX = this), RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern float g_00799e8c;
extern float g_0076d064;
extern float g_00799f3c;

__declspec(naked) void __cdecl FUN_006ab3e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, dword ptr [eax + 0x18]
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x44]
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 8]
        push    eax
        push    edi
        call    dword ptr [edx + 8]
        mov     ecx, dword ptr [esi + 0x48]
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 0x18]
        push    eax
        push    edi
        call    dword ptr [edx + 8]
        fld     dword ptr [g_0076c5b0]
        fld     dword ptr [esp + 0x18]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jnz     L_44c
        fst     dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_00799e8c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_43c
        mov     ecx, dword ptr [g_00799e8c]
        mov     dword ptr [esp + 0x18], ecx
L_43c:
        fld     dword ptr [esp + 0x18]
        fdiv    dword ptr [g_00799e8c]
        fstp    dword ptr [esp + 0x10]
        jmp     L_48c
L_44c:
        fld     dword ptr [esp + 0x18]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 1
        jz      L_484
        fst     dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x18]
        fchs
        fcom    dword ptr [g_00799e8c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_478
        fstp    st(0)
        fld     dword ptr [g_00799e8c]
L_478:
        fdiv    dword ptr [g_00799e8c]
        fstp    dword ptr [esp + 0xc]
        jmp     L_48c
L_484:
        fst     dword ptr [esp + 0xc]
        fst     dword ptr [esp + 0x10]
L_48c:
        fld     dword ptr [esp + 8]
        fcomp   st(1)
        fld     dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4c0
        fcomp   dword ptr [g_00799e8c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b4
        mov     edx, dword ptr [g_00799e8c]
        mov     dword ptr [esp + 8], edx
L_4b4:
        fld     dword ptr [esp + 8]
        fdiv    dword ptr [g_00799e8c]
        jmp     L_4fa
L_4c0:
        fcomp   st(1)
        fnstsw  ax
        test    ah, 1
        jz      L_4f4
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 8]
        fchs
        fcom    dword ptr [g_00799e8c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4e8
        fstp    st(0)
        fld     dword ptr [g_00799e8c]
L_4e8:
        fdiv    dword ptr [g_00799e8c]
        fld     dword ptr [esp + 0x18]
        jmp     L_4fa
L_4f4:
        fld     dword ptr [g_0076c5b0]
L_4fa:
        fld     st(1)
        fadd    st(0), st(1)
        fadd    dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0x10]
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 1
        jz      L_51b
        fsubr   dword ptr [g_0076d064]
        jmp     L_523
L_51b:
        fstp    st(0)
        fld     dword ptr [g_00799f3c]
L_523:
        mov     eax, dword ptr [esi + 0x64]
        mov     ecx, dword ptr [esi + 0x8c]
        fst     dword ptr [eax + 0x20]
        mov     al, byte ptr [esp + 0x1c]
        fstp    dword ptr [ecx + 0x20]
        test    al, al
        jnz     L_590
        mov     edx, dword ptr [esi + 0x68]
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esi + 0x60]
        mov     dword ptr [edx + 0x20], eax
        mov     eax, dword ptr [esi + 0x6c]
        mov     edx, dword ptr [esp + 0x10]
        fst     dword ptr [eax + 0x20]
        mov     eax, dword ptr [esp + 0xc]
        fld     st(1)
        mov     dword ptr [ecx + 0x20], edx
        mov     ecx, dword ptr [esi + 0x70]
        mov     edx, dword ptr [esi + 0x90]
        fstp    dword ptr [ecx + 0x20]
        mov     ecx, dword ptr [esi + 0x88]
        mov     dword ptr [edx + 0x20], eax
        mov     eax, dword ptr [esi + 0x94]
        mov     edx, dword ptr [esp + 0x10]
        fstp    dword ptr [eax + 0x20]
        mov     dword ptr [ecx + 0x20], edx
        mov     ecx, dword ptr [esi + 0x98]
        pop     edi
        fstp    dword ptr [ecx + 0x20]
        pop     esi
        add     esp, 0xc
        ret     8
L_590:
        fstp    st(0)
        pop     edi
        fstp    st(0)
        pop     esi
        add     esp, 0xc
        ret     8
    }
}
