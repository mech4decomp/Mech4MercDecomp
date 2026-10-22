/*
 * FUN_00602240 (444 B) — __fastcall (ECX = param), RET.
 *
 * Validates a set of game objects: counts objects of a given type and
 * checks that at most one distinct "owner" (FUN_0041fd80 + 0x514) is
 * present. Returns 1 if valid, 0 otherwise.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_77b63c;
extern int g_7dab44;
extern int g_7dab40;
extern float __stdcall FUN_006100a0(void *a);
extern void *__stdcall FUN_0041fd80(void *a);

__declspec(naked) void __stdcall FUN_00602240(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x2214]
        sub     esp, 0x20
        test    al, al
        push    ebx
        push    ebp
        push    esi
        push    edi
        jz      L_f2
        add     ecx, 0x21e8
        call    FUN_006100a0
        fcomp   dword ptr [g_77b63c]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_f2
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0xc]
        mov     esi, dword ptr [ecx + 0xc]
        lea     ebx, [ecx + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x50]
        mov     ecx, dword ptr [eax + 0xe4]
        xor     esi, 0x85739531
        test    ecx, ecx
        jnz     L_305
        xor     edi, edi
        lea     ecx, [esi + 0x3584]
        mov     edx, 0xff
    L_2ad:
        mov     al, byte ptr [ecx + -0x4c]
        test    al, al
        jz      L_2d0
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_2d0
        mov     eax, dword ptr [eax + 0x170]
        test    eax, eax
        jz      L_2d0
        mov     eax, dword ptr [eax + 0x4]
        cmp     dword ptr [eax], 0x429
        jnz     L_2d0
        inc     edi
    L_2d0:
        add     ecx, 0x2038
        dec     edx
        jnz     L_2ad
        lea     eax, [esi + 0x205d30]
        mov     ecx, 0x18
    L_2e4:
        cmp     dword ptr [eax], 0x0
        jz      L_2ea
        inc     edi
    L_2ea:
        add     eax, 0x22ac
        dec     ecx
        jnz     L_2e4
        cmp     edi, 0x1
        jg      L_f2
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x20
        ret
    L_305:
        mov     ecx, 0x8
        xor     eax, eax
        lea     edi, [esp + 0x10]
        rep     stosd
        lea     ecx, [esi + 0x3584]
        mov     edx, 0xff
    L_31d:
        mov     al, byte ptr [ecx + -0x4c]
        test    al, al
        jz      L_350
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_350
        mov     eax, dword ptr [eax + 0x170]
        test    eax, eax
        jz      L_350
        mov     edi, dword ptr [eax + 0x4]
        cmp     dword ptr [edi], 0x429
        jnz     L_350
        mov     eax, dword ptr [eax + 0x4cc]
        mov     edi, dword ptr [esp + eax*0x4 + 0x10]
        lea     eax, [esp + eax*0x4 + 0x10]
        inc     edi
        mov     dword ptr [eax], edi
    L_350:
        add     ecx, 0x2038
        dec     edx
        jnz     L_31d
        lea     ecx, [esi + 0x205d30]
        mov     edx, 0x18
    L_364:
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_37b
        mov     eax, dword ptr [eax + 0x4cc]
        mov     esi, dword ptr [esp + eax*0x4 + 0x10]
        lea     eax, [esp + eax*0x4 + 0x10]
        inc     esi
        mov     dword ptr [eax], esi
    L_37b:
        add     ecx, 0x22ac
        dec     edx
        jnz     L_364
        mov     esi, dword ptr [ebx]
        xor     esi, 0x85739531
        xor     eax, eax
        lea     ecx, [esp + 0x10]
    L_392:
        cmp     dword ptr [ecx], 0x0
        jnz     L_3aa
        inc     eax
        add     ecx, 0x4
        cmp     eax, 0x8
        jl      L_392
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x20
        ret
    L_3aa:
        mov     ecx, dword ptr [esi + eax*0x4 + 0x204d00]
        call    FUN_0041fd80
        mov     ebp, dword ptr [eax + 0x514]
        xor     edi, edi
        lea     ebx, [esp + 0x10]
        add     esi, 0x204d00
    L_3c8:
        cmp     dword ptr [ebx], 0x0
        jz      L_3dc
        mov     ecx, dword ptr [esi]
        call    FUN_0041fd80
        cmp     ebp, dword ptr [eax + 0x514]
        jnz     L_f2
    L_3dc:
        inc     edi
        add     ebx, 0x4
        add     esi, 0x4
        cmp     edi, 0x8
        jl      L_3c8
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x20
        ret
    L_f2:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x20
        ret
    }
}
