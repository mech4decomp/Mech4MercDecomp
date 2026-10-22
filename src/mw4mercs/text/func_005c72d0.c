/*
 * FUN_005C72D0 (724 B) — __thiscall (ECX=this), RET 4 (one stack param).
 *
 * Grows/updates a dynamic array (param_1) of object pointers, then scans
 * a candidate list (FUN_005b9560) for objects passing visibility checks
 * (FUN_0041fd80, FUN_005fb8e0) and appends them to the array.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *arg);
extern void __cdecl FUN_005cc090(int a, int b, void *c, void *d);
extern void __fastcall FUN_005805a0(void *this, void *a, int b);
extern int __fastcall FUN_005b9560(void *this);
extern void *__fastcall FUN_0041fd80(void *this);
extern float __fastcall FUN_005fb8e0(void *this);
extern void __cdecl FUN_005809b0(void *dst, void *src);

__declspec(naked) void __fastcall FUN_005c72d0(void)
{
    

extern int DAT_0076d598;
extern int DAT_0076c5b0;
__asm {
sub     esp, 0x1C
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x170]
        mov     eax, dword ptr [edi + 0x3D4]
        test    eax, eax
        mov     dword ptr [esp + 0x20], ecx
        jz      L759A
        mov     ecx, dword ptr [eax + 0x17C]
        mov     eax, dword ptr [esp + 0x30]
        mov     esi, dword ptr [eax + 8]
        mov     ebx, dword ptr [eax]
        mov     edx, esi
        sub     edx, ebx
        sar     edx, 2
        cmp     edx, ecx
        mov     dword ptr [esp + 0x14], ecx
        jnc     L73AD
        mov     ebp, dword ptr [eax + 4]
        sub     ebp, ebx
        sar     ebp, 2
        test    ebx, ebx
        mov     dword ptr [esp + 0x1C], ebp
        jz      L737B
        test    ecx, ecx
        jz      L7339
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 4
        mov     ebp, eax
        jmp     L733B
    L7339:
        xor     ebp, ebp
    L733B:
        mov     ecx, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [edx + 4]
        push    ecx
        push    ebp
        push    eax
        push    ebx
        call    FUN_005cc090
        mov     ecx, dword ptr [esp + 0x40]
        mov     eax, dword ptr [ecx]
        sub     esi, eax
        add     esp, 0x10
        sar     esi, 2
        push    esi
        push    eax
        add     ecx, 8
        mov     ebx, ebp
        mov     dword ptr [esp + 0x2C], eax
        call    FUN_005805a0
        mov     ebp, dword ptr [esp + 0x1C]
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x30]
        jmp     L739D
    L737B:
        test    ecx, ecx
        jz      L739B
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x18]
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x34]
        add     esp, 4
        jmp     L739D
    L739B:
        xor     ebx, ebx
    L739D:
        lea     edx, [ebx + ebp*4]
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 4], edx
        lea     ecx, [ebx + ecx*4]
        add     eax, 8
        mov     dword ptr [eax], ecx
    L73AD:
        mov     ecx, dword ptr [edi + 0x3D4]
        call    FUN_005b9560
        mov     edx, dword ptr [edi + 0x3D4]
        mov     ecx, dword ptr [edx + 0x17C]
        test    ecx, ecx
        mov     dword ptr [esp + 0x18], 0
        jle     L759A
        mov     dword ptr [esp + 0x1C], eax
    L73D8:
        mov     eax, dword ptr [eax]
        test    eax, eax
        jz      L7568
        lea     esi, [eax + 0x10]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L7568
        mov     ecx, esi
        call    FUN_0041fd80
        mov     dword ptr [esp + 0x10], eax
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x60]
        mov     esi, eax
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x60]
        cmp     esi, eax
        jz      L7568
        mov     esi, dword ptr [esp + 0x20]
        lea     ecx, [esi + 0x1C8]
        call    FUN_0041fd80
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, eax
        jz      L7568
        cmp     ecx, dword ptr [esi + 0x170]
        jz      L7568
        call    FUN_005fb8e0
        fcomp dword ptr [DAT_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jnz     L7568
        mov     ecx, dword ptr [esp + 0x10]
        call    FUN_005fb8e0
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L7568
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edx + 0x3F8]
        test    eax, eax
        jz      L7568
        mov     eax, dword ptr [edx + 0x2FC]
        test    eax, eax
        jz      L7568
        mov     eax, dword ptr [esp + 0x30]
        mov     esi, dword ptr [eax + 4]
        cmp     esi, dword ptr [eax + 8]
        jz      L74AB
        test    esi, esi
        jz      L74A0
        mov     dword ptr [esi], edx
    L74A0:
        add     esi, 4
        mov     dword ptr [eax + 4], esi
        jmp     L7568
    L74AB:
        mov     ebp, dword ptr [eax]
        mov     eax, esi
        sub     eax, ebp
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp + 0x14], 1
        mov     dword ptr [esp + 0x24], eax
        lea     ecx, [esp + 0x14]
        jc      L74CD
        lea     ecx, [esp + 0x24]
    L74CD:
        add     eax, dword ptr [ecx]
        mov     dword ptr [esp + 0x24], eax
        jz      L74EF
        lea     ecx, [eax*4]
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [esp + 0x14]
        add     esp, 4
        mov     dword ptr [esp + 0x14], eax
        jmp     L74F7
    L74EF:
        mov     dword ptr [esp + 0x14], 0
    L74F7:
        cmp     ebp, esi
        mov     edi, dword ptr [esp + 0x14]
        jz      L7519
        mov     ebx, ebp
    L7501:
        push    ebx
        push    edi
        call    FUN_005809b0
        add     ebx, 4
        add     esp, 8
        add     edi, 4
        cmp     ebx, esi
        jnz     L7501
        mov     edx, dword ptr [esp + 0x10]
    L7519:
        test    edi, edi
        jz      L751F
        mov     dword ptr [edi], edx
    L751F:
        add     edi, 4
        cmp     esi, esi
        mov     ebx, edi
        jz      L753E
        mov     edi, esi
    L752A:
        push    edi
        push    ebx
        call    FUN_005809b0
        add     edi, 4
        add     esp, 8
        add     ebx, 4
        cmp     edi, esi
        jnz     L752A
    L753E:
        test    ebp, ebp
        mov     dword ptr [esp + 0x28], ebp
        jz      L754F
        push    ebp
        call    FUN_004084e0
        add     esp, 4
    L754F:
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 4], ebx
        lea     ecx, [ecx + edx*4]
        add     eax, 8
        mov     dword ptr [eax], ecx
    L7568:
        mov     edx, dword ptr [esp + 0x20]
        mov     edi, dword ptr [edx + 0x170]
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x1C]
        mov     edx, dword ptr [edi + 0x3D4]
        mov     esi, dword ptr [edx + 0x17C]
        inc     ecx
        add     eax, 4
        cmp     ecx, esi
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1C], eax
        jl      L73D8
    L759A:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1C
        ret     4
    }


}
