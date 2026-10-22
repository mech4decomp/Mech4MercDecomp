/*
 * FUN_005d7b50 (338 B) — Destructor. Sets vtable, frees the parallel
 * arrays (int array at +0x10, object array at +0x1c), frees the object at
 * +0x3c and +0x40, frees the array at +0x48, then calls the array
 * shrink/free helpers and the base destructor.
 *
 * __fastcall (ECX = this), no stack params, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005d7b50(void *param)
{
    

extern void __cdecl FUN_1004084c1(void);
extern void __cdecl FUN_1005d6ac3(void);
extern void __cdecl FUN_10040848d(void);
extern void __cdecl FUN_10040846c(void);
extern void __cdecl FUN_006579ff(void);
extern void __cdecl FUN_100408459(void);
extern void __cdecl FUN_100408437(void);
extern void __cdecl FUN_100408426(void);
extern void __cdecl FUN_100408419(void);
extern void __cdecl FUN_0068cd42(void);
extern void __cdecl FUN_1004083fc(void);
extern void __cdecl FUN_1005b8913(void);
extern void __cdecl FUN_005d9f2d(void);
extern void __cdecl FUN_005d9f07(void);
extern void __cdecl FUN_10041523d(void);
__asm {
push    ecx
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14]
        push    edi
        mov     dword ptr [esi], 0x788198
        mov     edi, dword ptr [esi + 0x10]
        sub     eax, edi
        sar     eax, 0x2
        test    eax, eax
        jle     L7B88
        mov     ebx, eax
L7B6D:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L7B7C
        push    eax
        call FUN_1004084c1
        add     esp, 0x4
L7B7C:
        mov     dword ptr [edi], 0x0
        add     edi, 0x4
        dec     ebx
        jnz     L7B6D
L7B88:
        mov     eax, dword ptr [esi + 0x20]
        mov     edi, dword ptr [esi + 0x1c]
        sub     eax, edi
        sar     eax, 0x2
        test    eax, eax
        push    ebp
        jle     L7BBC
        mov     ebp, eax
L7B9A:
        mov     ebx, dword ptr [edi]
        test    ebx, ebx
        jz      L7BB0
        mov     ecx, ebx
        call FUN_1005d6ac3
        push    ebx
        call FUN_10040848d
        add     esp, 0x4
L7BB0:
        mov     dword ptr [edi], 0x0
        add     edi, 0x4
        dec     ebp
        jnz     L7B9A
L7BBC:
        mov     edi, dword ptr [esi + 0x3c]
        xor     ebx, ebx
        cmp     edi, ebx
        jz      L7BE4
        mov     eax, dword ptr [edi + 0x8]
        push    eax
        call FUN_10040846c
        add     esp, 0x4
        mov     ecx, edi
        mov     dword ptr [edi + 0x8], ebx
        call FUN_006579ff
        push    edi
        call FUN_100408459
        add     esp, 0x4
L7BE4:
        mov     dword ptr [esi + 0x3c], ebx
        mov     ebx, dword ptr [esi + 0x40]
        test    ebx, ebx
        jz      L7C24
        mov     ebp, dword ptr [ebx + 0x10]
        xor     edi, edi
        test    ebp, ebp
        jle     L7C0B
L7BF7:
        mov     ecx, dword ptr [ebx + 0x8]
        mov     edx, dword ptr [ecx + edi*0x4]
        push    edx
        call FUN_100408437
        add     esp, 0x4
        inc     edi
        cmp     edi, ebp
        jl      L7BF7
L7C0B:
        mov     eax, dword ptr [ebx + 0x8]
        push    eax
        call FUN_100408426
        push    ebx
        mov     dword ptr [ebx + 0x8], 0x0
        call FUN_100408419
        add     esp, 0x8
L7C24:
        mov     edi, dword ptr [esi + 0x48]
        xor     ebx, ebx
        cmp     edi, ebx
        mov     dword ptr [esi + 0x40], ebx
        pop     ebp
        jz      L7C41
        mov     ecx, edi
        call FUN_0068cd42
        push    edi
        call FUN_1004083fc
        add     esp, 0x4
L7C41:
        mov     ecx, dword ptr [esi + 0x28]
        mov     edx, dword ptr [esi + 0x30]
        sub     edx, ecx
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        push    edx
        push    ecx
        mov     dword ptr [esi + 0x48], ebx
        mov     dword ptr [esp + 0x14], ecx
        call FUN_1005b8913
        mov     eax, dword ptr [esi + 0x1c]
        mov     ecx, dword ptr [esi + 0x24]
        sub     ecx, eax
        sar     ecx, 0x2
        push    ecx
        push    eax
        mov     dword ptr [esp + 0x1c], eax
        call FUN_005d9f2d
        mov     eax, dword ptr [esi + 0x10]
        mov     edx, dword ptr [esi + 0x18]
        sub     edx, eax
        sar     edx, 0x2
        push    edx
        push    eax
        mov     dword ptr [esp + 0x24], eax
        call FUN_005d9f07
        add     esp, 0x18
        mov     ecx, esi
        call FUN_10041523d
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }


}
