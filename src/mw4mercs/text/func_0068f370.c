/*
 * FUN_0068f370 (175 B) — __thiscall destructor: sets vtable 0x798fb0,
 * clears the global instance pointer 0x82db14 if it points to this,
 * frees a linked list at +0x38, copies an array at +0xc to +0x8, frees
 * the +0x38 list again, and frees the +0x8 buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);
extern unsigned int g_82db14;

__declspec(naked) void FUN_0068f370(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_82db14]
        push    ebx
        push    esi
        mov     esi, ecx
        xor     ebx, ebx
        cmp     eax, esi
        push    edi
        mov     dword ptr [esi], 0x798fb0
        jnz     notglobal
        mov     dword ptr [g_82db14], ebx
notglobal:
        mov     eax, dword ptr [esi + 0x38]
        cmp     eax, ebx
        jz      done1
loop1:
        cmp     eax, ebx
        mov     edi, dword ptr [eax]
        jz      skip1
        mov     dword ptr [eax + 0x4], ebx
        push    eax
        mov     dword ptr [eax], ebx
        call    FUN_004084e0
        add     esp, 0x4
skip1:
        cmp     edi, ebx
        mov     eax, edi
        jnz     loop1
done1:
        mov     dword ptr [esi + 0x38], ebx
        mov     eax, dword ptr [esi + 0xc]
        mov     edx, eax
        sub     edx, eax
        sar     edx, 0x3
        cmp     edx, ebx
        mov     dword ptr [esi + 0x3c], ebx
        mov     ecx, dword ptr [esi + 0x8]
        jle     done2
loop2:
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx], edi
        mov     edi, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x4], edi
        add     eax, 0x8
        add     ecx, 0x8
        dec     edx
        jnz     loop2
done2:
        mov     dword ptr [esi + 0xc], ecx
        mov     eax, dword ptr [esi + 0x38]
        cmp     eax, ebx
        mov     dword ptr [esi + 0x34], 0x798fb8
        jz      done3
loop3:
        cmp     eax, ebx
        mov     edi, dword ptr [eax]
        jz      skip3
        mov     dword ptr [eax + 0x4], ebx
        push    eax
        mov     dword ptr [eax], ebx
        call    FUN_004084e0
        add     esp, 0x4
skip3:
        cmp     edi, ebx
        mov     eax, edi
        jnz     loop3
done3:
        mov     dword ptr [esi + 0x38], ebx
        mov     esi, dword ptr [esi + 0x8]
        cmp     esi, ebx
        mov     dword ptr [esp + 0xc], esi
        jz      done4
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
done4:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }
}
