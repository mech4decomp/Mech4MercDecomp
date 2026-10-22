/*
 * FUN_100077e0 (411 B) - __thiscall SEH-guarded standalone/encoding check
 * routine (sibling of FUN_100075e0/FUN_100076e0). Sets up an exception
 * registration frame, allocates two stack buffers via FUN_1001ef70, calls
 * FUN_10008be0(this, &local_1c, &local_28). Compares the two returned
 * strings against 0x100255b4 and 0x100255ac; on match sets *param_1 and
 * returns 1. Error paths call FUN_10008d30 with a message string.
 *
 * __thiscall (ECX = this), RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001ef70(void);
extern void __cdecl FUN_10008be0(void);
extern void __cdecl FUN_10008d30(void);
extern void *g_100210E0;   /* IAT import, loaded into ESI, called via CALL ESI */

__declspec(naked) void __cdecl FUN_100077e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x1001f7c0
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, 0x804
        call    FUN_1001ef70
        mov     eax, esp
        xor     ebx, ebx
        mov     esi, 0x400
        mov     dword ptr [ebp - 0x18], ebx
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x10], esi
        mov     eax, 0x804
        mov     dword ptr [ebp - 4], ebx
        call    FUN_1001ef70
        mov     eax, esp
        mov     dword ptr [ebp - 0x24], ebx
        mov     dword ptr [ebp - 0x20], eax
        mov     dword ptr [ebp - 0x1c], esi
        lea     eax, [ebp - 0x24]
        lea     ecx, [ebp - 0x18]
        push    eax
        push    ecx
        mov     ecx, edi
        mov     byte ptr [ebp - 4], 1
        call    FUN_10008be0
        test    al, al
        jz      loc_7931
        mov     eax, dword ptr [ebp - 0x14]
        mov     esi, dword ptr [g_100210E0]
        cmp     eax, ebx
        jnz     loc_7868
        mov     eax, 0x100255b4
        neg     eax
        sbb     eax, eax
        inc     eax
        jmp     loc_7878
loc_7868:
        mov     edx, 0x100255b4
        test    edx, edx
        jz      loc_7880
        push    edx
        push    eax
        call    esi
        add     esp, 8
loc_7878:
        cmp     eax, ebx
        jnz     loc_7925
loc_7880:
        mov     edx, dword ptr [ebp - 0x20]
        mov     eax, 0x100255ac
        cmp     edx, ebx
        jnz     loc_7893
        neg     eax
        sbb     eax, eax
        inc     eax
        jmp     loc_78a5
loc_7893:
        test    eax, eax
        jz      loc_78a9
        push    0x100255ac
        push    edx
        call    esi
        mov     edx, dword ptr [ebp - 0x20]
        add     esp, 8
loc_78a5:
        cmp     eax, ebx
        jnz     loc_78bf
loc_78a9:
        mov     ecx, dword ptr [ebp + 8]
        cmp     edx, ebx
        mov     byte ptr [ebp - 4], bl
        mov     byte ptr [ecx], 1
        jz      loc_78ff
        mov     ecx, dword ptr [ebp - 0x24]
        cmp     ecx, ebx
        jz      loc_78ff
        jmp     loc_78f9
loc_78bf:
        cmp     edx, ebx
        jnz     loc_78cf
        mov     eax, 0x100255a4
        neg     eax
        sbb     eax, eax
        inc     eax
        jmp     loc_78e2
loc_78cf:
        mov     ecx, 0x100255a4
        test    ecx, ecx
        jz      loc_78e6
        push    ecx
        push    edx
        call    esi
        mov     edx, dword ptr [ebp - 0x20]
        add     esp, 8
loc_78e2:
        cmp     eax, ebx
        jnz     loc_791e
loc_78e6:
        mov     eax, dword ptr [ebp + 8]
        cmp     edx, ebx
        mov     byte ptr [ebp - 4], bl
        mov     byte ptr [eax], bl
        jz      loc_78ff
        mov     ecx, dword ptr [ebp - 0x24]
        cmp     ecx, ebx
        jz      loc_78ff
loc_78f9:
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 4]
loc_78ff:
        mov     eax, dword ptr [ebp - 0x14]
        mov     dword ptr [ebp - 4], 0xffffffff
        cmp     eax, ebx
        jz      loc_791a
        mov     ecx, dword ptr [ebp - 0x18]
        cmp     ecx, ebx
        jz      loc_791a
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 4]
loc_791a:
        mov     al, 1
        jmp     loc_7965
loc_791e:
        push    0x1002556c
        jmp     loc_792a
loc_7925:
        push    0x1002554c
loc_792a:
        mov     ecx, edi
        call    FUN_10008d30
loc_7931:
        mov     eax, dword ptr [ebp - 0x20]
        mov     byte ptr [ebp - 4], bl
        cmp     eax, ebx
        jz      loc_7948
        mov     ecx, dword ptr [ebp - 0x24]
        cmp     ecx, ebx
        jz      loc_7948
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 4]
loc_7948:
        mov     eax, dword ptr [ebp - 0x14]
        mov     dword ptr [ebp - 4], 0xffffffff
        cmp     eax, ebx
        jz      loc_7963
        mov     ecx, dword ptr [ebp - 0x18]
        cmp     ecx, ebx
        jz      loc_7963
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 4]
loc_7963:
        xor     al, al
loc_7965:
        mov     ecx, dword ptr [ebp - 0xc]
        lea     esp, [ebp - 0x30]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
