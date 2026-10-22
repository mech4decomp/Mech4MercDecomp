/*
 * FUN_0060E4C0 (217 B) — __fastcall (ECX=this, RET). Releases a sub-object,
 * adjusts a refcount at edi-1, dispatches through this->vtable+0x3c, and
 * conditionally initializes a structure via FUN_00412780.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f27e0;   /* 0x007f27e0 */
extern int g_7dab44;   /* 0x007dab44 */
extern int g_7dab40;   /* 0x007dab40 */

extern void* __cdecl FUN_0041fd80(void);
extern void  __cdecl FUN_004c3d50(void);
extern void  __cdecl FUN_006fb7c0(int);
extern void  __cdecl FUN_00412780(void);
extern void  __cdecl FUN_004084e0(void*);

__declspec(naked) void FUN_0060e4c0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        push    edi
        jz      l_90
        lea     ebx, [esi + 0x30]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      l_90
        mov     ecx, dword ptr [g_7f27e0]
        push    0x0
        call    FUN_004c3d50
        mov     ecx, dword ptr [esi + 0x4]
        test    ecx, ecx
        jz      l_03
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        mov     dword ptr [esi + 0x4], 0x0
    l_03:
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     ecx, dword ptr [eax + 0x10]
        mov     edi, dword ptr [ecx + 0xc]
        test    edi, edi
        jz      l_17
        inc     byte ptr [edi - 0x1]
    l_17:
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      l_2a
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
    l_2a:
        push    edi
        call    FUN_006fb7c0
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x3c]
        test    eax, eax
        mov     dword ptr [esi + 0x38], eax
        jnz     l_77
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        mov     ebx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [esi + 0x40]
        xor     edx, ebx
        mov     eax, dword ptr [edx + 0xc]
        xor     eax, 0x85739531
        test    ecx, ecx
        jnz     l_77
        push    0x76b768
        lea     ecx, [eax + 0xc8]
        mov     dword ptr [eax + 0xc4], 0x0
        call    FUN_00412780
    l_77:
        test    edi, edi
        jz      l_90
        mov     cl, byte ptr [edi - 0x1]
        lea     eax, [edi - 0x1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_90
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_90:
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        ret
    }
}
